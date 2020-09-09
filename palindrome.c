#include <stdio.h> /* printf */
#include <string.h> /* strlen */
#include <stdlib.h> /*malloc */

int IsPalindrome(const char *str);

int main()
{
	
	char *str = (char*)malloc(100*(sizeof *str));
	int is_palindrome; 
	
	printf("enter a string: ");
	fgets(str, 100, stdin);
	*strchr(str, '\n') = '\0';
	
	is_palindrome = IsPalindrome(str);
	if ( is_palindrome == 1)
	{
	printf( "%s is palindrome", str);
	}
	else
	{
	printf( "%s isn't a palindrome", str);
	}
	

	return 0;
}


 /* check if a string is a palindrome */

int IsPalindrome(const char *str)
{
	int is_palindrome = 0;
	char *end = (char *) str + strlen(str)-1;
	char *start = (char *) str;
	
	while (start < end)
	{
	if(*start == *end)
		{
		is_palindrome = 1;
		start++;
		end--;
		}
	else
		{
		is_palindrome = 0;
		break;
		}
	}
	return is_palindrome;
}
