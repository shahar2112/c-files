#include <stdio.h> /* printf */
#include <stdlib.h> /*malloc */

int seven_Boom(int *start, int *end);
int is_digit_seven(int num);

int main()
{
	int *start = NULL; 
	int *end = NULL;
	start = (int*)malloc(50 * sizeof(*start));
	end = (int*)malloc(50 * sizeof(*end));
	
	if(NULL == start || NULL == end)
		{
		fprintf(stderr , "allocation error\n");
		exit(1);
		}

	printf("enter start range  and end range: ");
	scanf(" %d %d", start , end);
	
	seven_Boom(start, end);

	free(start);
	free(end);

	return 0;
}

int seven_Boom(int *start, int *end)
{

	for(; *start<*end; (*start)++)
		{
			if((0 == *start%7) || is_digit_seven(*start))
			{
			printf("BOOM ");
			}
			else
			{
			printf("%d, ", *start);
			}
		}
	return 0;
}


int is_digit_seven(int num)
{
	int digit=0;

	while(0 < num )
	{
		digit = num % 10;
		
		if (digit == 7)
		{
		return 1;
		}
		else
		{
		num = num/10;
		}
	}
	return 0;
}
