#include <stdio.h> /*printf */
#include <string.h>

void permute(char *word);
void permuteUtil(char *word, int left, int right);
void Swap(char *left, char *right);

int main()
{
	char word[] = "bored";

	printf("word is %s\n", word);
	printf("permutations of the word are\n");
	permute(word);


return 0;
}

void permute(char *word)
{
  permuteUtil(word, 0, strlen(word) - 1);
}

void permuteUtil(char *word, int left, int right)
{
	int i = 0;

	if(left == right)
	{	
		printf(" %s\n", word);
		if(right >= 1)
		{
			permuteUtil(word +1 , 0 , right -1);
		}
		return;
	}
	else
	{
		for(i = left; i <= right; i ++)
		{
			Swap(word + left, word + i);
			permuteUtil(word , left + 1, right);
			Swap(word + left, word + i);
		}


		
	}

}

void Swap(char *left, char *right)
{
	char temp;

	temp = *left;
	*left = *right;
	*right = temp;
}