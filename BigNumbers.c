#include <stdio.h> /*printf */
#include <string.h> /*strlrn*/
#include <stddef.h> /*size_t*/
#include <stdlib.h> /*maloc,...*/

int FromAsciiToNum(char c);
char FromNumToAscii(int num);
int add(int num1, int num2, int *pCarry);
void Swap_pointers(char **p1, char **p2);
void AddLargeNums(char *st1, char *st2, char *stRes);

int main ()
{
	char *st1 = (char *)malloc(20 * sizeof(*st1)); 
	char *st2 = (char *)malloc(20 * sizeof(*st2));
	char *stRes = NULL;
	size_t len_st1 = 0;
	size_t len_st2 = 0;	
	
	if (st1 == NULL || st2 == NULL)
	{
		exit (3);
	}

	strcpy(st1, "189787");
	strcpy(st2, "4546");
			
	/*len must be checked at main, in order to move it into func in right order*/
	len_st1 = strlen(st1); 
	len_st2 = strlen(st2);

	/*making sure st1 is bigger, swappin pointers if not*/
	if (len_st2 >= len_st1)
	{
		Swap_pointers(&st1, &st2);	
	}
	
	/*stRes must be bigger then st1 by one*/
	stRes = (char *)malloc(len_st1 +1);
	if (stRes == NULL)
	{
		exit (3);
	}
	
	AddLargeNums(st1, st2, stRes);

	/*in case stRes stays at the same size of st1, point to next char*/
	if (*stRes == 0)	
	{
		stRes++;
	}

	printf("%s\n", stRes);

	return 0;
}

void AddLargeNums(char *st1, char *st2, char *stRes)
{	
	size_t len_st1 = 0;
	size_t len_st2 = 0;
	int carry = 0;
	int *pCarry = &carry;
	int AddRes = 0;	/*result of unity only*/
	char *pToEndSt1 = NULL;
	char *pToEndSt2 = NULL;	
	char *pToEndStRes = NULL;
	char c;	/*holds converted num to char*/
	int numSt1 = 0; /*holds converted char to num*/
	int numSt2 = 0;
	
	/*should consider asking as function arguments*/
	len_st1 = strlen(st1); 
	len_st2 = strlen(st2);

	pToEndSt1 = (st1 + len_st1 - 1);
	pToEndSt2 = (st2 + len_st2 - 1);
	pToEndStRes = (stRes + len_st1); /*stRes bigger than st1 by 1*/

	/*will run for the duration of smaller string*/	
	while (pToEndSt2 >= st2)
	{
		numSt1 = FromAsciiToNum(*pToEndSt1); 
		numSt2 = FromAsciiToNum(*pToEndSt2);
		AddRes = add(numSt1, numSt2, pCarry);	
		c = FromNumToAscii(AddRes); 
		*pToEndStRes = c; /*placing converted char at end of stRes*/
		pToEndSt1--; 
		pToEndSt2--;
		pToEndStRes--;
	}
	
	/*will run for the duration of bigger string*/	
	while (pToEndSt1 >= st1)
	{
		numSt1 = FromAsciiToNum(*pToEndSt1);	
		AddRes = add(numSt1, 0, pCarry);
		c = FromNumToAscii(AddRes); 
		*pToEndStRes = c; 		
		pToEndSt1--; 
		pToEndStRes--;
	}
	
	/*returning pointer to last input to string*/	
	pToEndStRes++;
	
	if (*pCarry != 0) /*in case of carry, input to first digit*/
	{	
		pToEndStRes--;	
		c = FromNumToAscii(*pCarry);
		*pToEndStRes = c; 
	}
	
	return;
}

int FromAsciiToNum(char c)
{	
	int num = c - 48;	
	return num;
}


char FromNumToAscii(int num)

{
	char c = '0' + num;
	return c;
}


int add(int num1, int num2, int *pCarry)
{
	int res = num1 + num2 + (*pCarry);
	if ((res) > 9)
	{
		*pCarry = res / 10;
		res = res % 10;
		return res;
	}
	else
	{
		*pCarry = 0;
	}
	return res;
}

void Swap_pointers(char **p1, char **p2)
{
	char *tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	return;
}

