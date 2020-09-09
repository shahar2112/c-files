#include <stdio.h>  /*printf */
#include <stdlib.h> /*malloc */
#include <assert.h> /*assert */
#include <stddef.h> /*size_t*/

<<<<<<< HEAD
int Strlen(const char* string);
int Strcmp(const char *s1, const char *s2);
char Strcpy(char *dest, const char *src);
char Strncpy(char *dest, const char *src, int n);
int Strcasecmp(const char *s1, const char *s2);
char *Strchr(const char *str, int c);
char *Strdup(const char *s);
char *Strcat(char *dest, const char *src);
char *Strncat(char *dest, const char *src, size_t n);
char *Strstr(const char *haystack, const char *needle);
size_t Strspn(const char *s, const char *accept);
char *Strtok(char *str, const char *delim);
=======
#include "header.h"
>>>>>>> e3eee9892af1d49b018b573b4188bf318ef4830a
  
int main()
{

	static char src[] = "GGG";
	static char src1[] = "";
	static char src2[] = "test test test";
	static char src3[] = "123";
	static char src4[] = "Mello";
	static char src5[] = "H";
	static char src6[] = "shahar";
	static char src9_1[] = "shahar";
	static char src9_2[] = "and again";
	static char src9_3[] = "yooooo";
	static char dest6[100] ="hello";
	static char dest9_1[100] ="hello";
	static char dest9_2[100] ="hello again";
	static char dest9_3[100] ="hello again";
	static char needle[] = "AB";
	static char needle1[] = "is";
	static char haystack[] = "this is a test";
	static char s[] = "abgabd";
	static char accept1[] = "gabc";
	static char accept2[] = "abc";
	static char accept3[] = "bgb";
<<<<<<< HEAD
	char str[] = "hello-my name-is-Shahar.";
	char *token = NULL;
=======
	static char *token= "-";
	static char *delim ="hi-how are you";

>>>>>>> e3eee9892af1d49b018b573b4188bf318ef4830a
	char *ptr_needle = Strstr(haystack, needle);
	
	char *dest = (char*) malloc(50);
	char *dest1 = (char*) malloc(50);
<<<<<<< HEAD
	
    /* if memory cannot be allocated*/
	
=======
    /* if memory cannot be allocated*/	
>>>>>>> e3eee9892af1d49b018b573b4188bf318ef4830a
	if(dest1 == NULL || dest == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

	
	/* -1- Test Strlen */
	printf(" \n\n Test Strlen:\n");	
	printf(" the length is %d \n" , Strlen("hgfjfgj"));
	printf(" the length is %d \n" , Strlen("yyyy"));
	printf(" the length is %d \n" , Strlen(""));

	
	/* -2- Test Strcmp */
	printf(" \n\n Test Strcmp: \n");
	printf(" %d \n", Strcmp("abc" , "abcd"));
	printf(" %d \n", Strcmp("adc" , "adc"));
	printf(" %d \n", Strcmp("Adc" , "adc"));
	printf(" %d \n", Strcmp("aaa" , ""));
	printf(" %d \n", Strcmp("T", "t"));
	

	/* -3- test Strcpy */
	printf(" \n\n Test Strcpy:\n");
	Strcpy(dest, src);
	printf(" %s \n", dest);
	Strcpy(dest, src1);
	printf(" %s \n", dest);
	Strcpy(dest, src2);
	printf(" %s \n", dest);
	Strcpy(dest, src3);
	printf(" %s \n", dest);


	/* -4- test Strncpy */
	printf("\n\n Test Strncpy:\n");
	Strncpy(dest1, src, 2);
	printf(" %s \n", dest1);
	Strncpy(dest1, src1, 5);
	printf(" %s \n", dest1);
	Strncpy(dest1, src2, 2);
	printf(" %s \n", dest1);
	Strncpy(src4, src5, 1);
	printf(" %s \n", src4);


	/* -5- Test Strcasecmp */
	printf("\n\n Test Strcasecmp:\n");
	printf(" %d \n", Strcasecmp("t", "t"));
    printf(" %d \n", Strcasecmp("T", ""));
    printf(" %d \n", Strcasecmp("abc", "Abcd"));
    printf(" %d \n", Strcasecmp("aaaaa", "aaa"));
    
    
    /* -6- Test Strchr */
    printf("\n\n Test Strchr:\n");
    printf(" location %p \n",  Strchr("abcd", 'b'));
    printf("location %p \n",  Strchr("chock", 'z'));
    printf(" location %p \n", Strchr("abc", '\0'));
    printf("location %p \n", Strchr("aaaaa", 'a'));
    
    
    /* -7- Test Strdup */
    printf("\n\n Test Strdup:\n");
    printf("location %p \n", Strdup("test"));
    printf("location %s \n", Strdup("test"));
    printf("location %p \n", Strdup(""));
    printf("location %s \n", Strdup(""));
    
    
    /* -8- Test Strcat */
    printf("\n\n Test Strcat:\n");
    printf("concatinated: %s\n", Strcat(dest6, src6));
    printf("concatinated: %s\n", Strcat(dest6, src2));
    printf("concatinated: %s\n", Strcat(dest6, src4));
    
    
        /* -9- Test Strncat */
    printf("\n\n Test Strncat:\n");
    printf("concatinated: %s\n", Strncat(dest9_1, src9_1, 3));
    printf("concatinated: %s\n", Strncat(dest9_2, src9_2, 0));
    printf("concatinated: %s\n", Strncat(dest9_3, src9_3, 20));
    
    
    /* -10- Test Strstr */
    printf("\n\n Test Strstr:\n");
    
    ptr_needle = Strstr(haystack, needle);

    if(ptr_needle != NULL)
    {
    printf(" string found\n");
    printf(" first of %s in %s is %p\n", needle, haystack, ptr_needle);
    }
    else
    {
    printf("string not found\n");
    }
    
	ptr_needle = Strstr(haystack, needle1);

    if(ptr_needle != NULL)
    {
    printf(" string found\n");
    printf(" first of %s in %s is %p\n", needle1, haystack, ptr_needle);
    }
    else
    {
    printf("string not found\n");
    }
    

	 /* -11- Test Strspn */
	printf("\n\n Test Strspn:\n");
    printf("calculate length of bites of %s in %s %ld\n", accept1 ,s, Strspn(s, accept1));
    printf("calculate length of bites of %s in %s %ld\n", accept2 ,s, Strspn(s, accept2));
    printf("calculate length of bites of %s in %s %ld\n", accept3 ,s, Strspn(s, accept3));
    
    
    /* -12- Test Strtok */
<<<<<<< HEAD
    printf("\n\n Test Strtok:\n");
	token = Strtok(str, "-");
=======
	token = Strtok(token, delim);
>>>>>>> e3eee9892af1d49b018b573b4188bf318ef4830a
	while (token != NULL)
	{
		printf("token: %s \n", token);
		token = Strtok(NULL, "-");
	}
   
    
    free(dest);
    dest = NULL;
    
 	free(dest1);
 	dest1 = NULL;
 	
return 0;
}


/* -1- finding a length of a string */

int Strlen(const char* string)
{
	int ctr = 0;
	assert(string);

	while (string[ctr] != '\0')
	{
		ctr++;
	}
return ctr;
}


/* -2- Comparing two strings */

int Strcmp(const char *s1, const char *s2)
{
	int i = 0;
	int result = 0;
	assert( s1 && s2 );
	
	for (i=0; i <= Strlen(s1); i++)
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i]-s2[i]);
			break;
		}
		
	}
return result;
}



/* -3- copy a string */

char Strcpy(char *dest, const char *src)
{
	int i = 0;
	
	assert( dest && src );
	
	for (i = 0; '\0' != src[i] ; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';

return dest[0];
}



/* -4- copy n number of a string */

char Strncpy(char *dest, const char *src, int n)
{
	int i = 0;
	assert( dest && src );
	
	for (i = 0; i<n ; i++)
	{
	dest[i] = src[i];
	} 

return dest[0];
}



/* -5- Comparing two strings (ignoring case letters) */

int Strcasecmp(const char *s1, const char *s2)
{

	int result = 0;
	assert( s1 && s2 );
	
	for (; '\0' != *s1  ||  '\0' != *s2 ; s1++, s2++)
	{
		result = *s1 - *s2;

			if (0 ==result || 32 == result || -32 == result )
			{
				result = 0;
			}
			else 
			{ 
			  break;
			}
	}
return result;
}



/* -6- search a specific character */

char *Strchr(const char *str, int cha)
{
	assert( str );
	for(; '\0' != *str ; str++)
	{
		if (*str == cha)
		{
		return (char*)str;
		}
		
	}
	return NULL;
}



<<<<<<< HEAD
/* -7- duplicate a string and return pointer */

char *Strdup(const char *s)
{
	char *dup = (char*)(malloc(Strlen(s) * sizeof(s)));
	if (NULL == dup)
	{
	exit(1);
	}
	
	assert(NULL != s);

	Strcpy(dup, s);

	return dup;
}


 
/* -8- appends the src string to the destination string */

char *Strcat(char *dest, const char *src)

	{	
		int i = 0;
		int dest_len = Strlen(dest);
		
		for (i = 0; '\0' != src[i] ; i++)
			{
				dest[dest_len + i] = src[i];
			}
			dest[dest_len + i] = '\0'; /* adding null byte */
	
	return dest;
	}
	
	
	
	/* -9- appends n bytes from src string to the dest string */
	
	char *Strncat(char *dest, const char *src, size_t n)
	
	{
		unsigned int i = 0;
		int dest_len = Strlen(dest);
		
		/* for (i=0; i<n; i++)
			{
			dest[dest_len + i] = src[i];
			}
			dest[dest_len + n] = '\0'; */
			
			for (; i<n; i++)
			{
			*(dest + dest_len + i) = *(src+i);
			}
			*(dest + dest_len + n) ='\0';/* adding null byte */
			
		return dest;
	 } 
		
		
		
		/* -10- find a first substring in string */
	
char *Strstr(const char *haystack, const char *needle)
	
{
	size_t i = 0;
	size_t needle_len = Strlen(needle);
	char *ptr_needle = (char *)Strchr(haystack, *needle); /*point to first needle */
	
	assert(haystack && needle);
	
	if (NULL == ptr_needle)
	{
	return NULL;
	}
	for (i = 1 ; i < needle_len ; i++)
		{
			if(needle[i] != ptr_needle[i])
			{
				ptr_needle = (char*)(Strchr((ptr_needle+1),*needle));
				if (NULL == ptr_needle)
				{
				return NULL;
				}
				i = 1;
			}
		
		}
		return ptr_needle;
}
		
		
		
    /* -11- calculate the length in bytes of s in accept */
  
  size_t Strspn(const char *s, const char *accept)
  {
  	char *ptr = NULL;		
	size_t i = 0;
	size_t ctr = 0;
	size_t str_len = Strlen(s);
	
		for( i = 0; i<str_len; i++)
		{
			ptr = Strchr (accept, *(s+i));
			if (ptr == NULL)
			{
			return ctr;
			}
			ctr++;
		}
		return ctr;
	}


 /* calculate the length in bytes in s not in reject */

size_t Strcspn(const char *s, const char *reject)
{
	size_t length = 0;

	while (*s != '\0')
	{
		while (*reject != '\0')
		{
			if (*s != *reject)
			{
				length++;
				break;
			}
			else
			{
				reject++;
			}
		}
		s++;
	}
	return length;
}



/* function breaks a string into zero or more nonempty tokens. */

char *Strtok(char *str, const char *delim)
{
	static char *start = NULL;
	char *token = NULL;
	
	
	if (str != NULL) /*only at the beginning  start = ptr */
	{
	start = str;
	}
	
	if (*start == '\0') /* return NULL when finished so the main loop will stop */
	{
		return 	NULL;
	}
	
	token = start; /* token points to new start point */
	
	while (*start != '\0')
	{
		if (Strspn(start,delim) != 0) 
		{
			*start = '\0';
			start++;
			while ((Strspn(start,delim) != 0))
			{
				start++;
			}
			break;
		}
		else
		{
			start++;
		}
	}
	return token;
}
	
=======

>>>>>>> e3eee9892af1d49b018b573b4188bf318ef4830a

