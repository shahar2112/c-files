#include <stdio.h> /* printf */
#include <string.h> /* strlen */
#include <stdlib.h> /*malloc */

void removeSpaces( char *str);


int main()
{

	char str[]="   hello		 to      you      ";
	printf("the string is .%s.\n", str);

	removeSpaces(str);
	printf("the new string is .%s.\n", str);


return 0;
}

void moveleft(char *str)
{
	for(; *str != '\0'; str++)
	{
		*str = *(str+1);
	}
return;
}

void removeSpaces( char *str)
{

	/* remove white spaces from the beginning */
	while((*str == ' ') || (*str == '\t'))
	{	
		moveleft(str);
	}
	
	/* remove duplicate in the middle */
	while(*str != '\0')
	{
		if(((*str == ' ') || (*str == '\t')) && ((*(str+1) == ' ') || (*(str+1) == '\t')))
		{	
			moveleft(str);
			str--;
		}
		
		str++;
	}

	str--;

	/*remove last space from end*/
	if((*str == ' ') || (*str == '\t'))
		{
			*str = '\0';
		}
	
	return;
}

