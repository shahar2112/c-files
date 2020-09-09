#include <stdio.h> /*printf */
#include <string.h>

void Reverse(char *word);
void ReverseUtil(char *left, char *right);

int main()
{
	char word[] = "abcdefg";

	printf("word is %s\n", word);
	Reverse(word);
	printf("word after reverse is %s\n", word);


return 0;
}

void Reverse(char *word)
{

  ReverseUtil(word, word + strlen(word) - 1);
}

void ReverseUtil(char *left, char *right)
{
	char temp;
	
	if(left > right)
	{
		return;
	}
	
	temp = *left;
	*left = *right;
	*right = temp;
	
	ReverseUtil(left + 1, right - 1);
}
