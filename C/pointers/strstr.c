#include <stdio.h>
#include <string.h>
/**
 * @brief - _strstr() function finds the first occurrence of
 * the substring needle in the string haystack
 * 
 * @param haystack 
 * @param needle 
 * @return char* 
 */
char *_strstr(char *haystack, char *needle)
{
	  char *h;
		char *n;

		while (*haystack)
		{
			h = haystack;
			n = needle;
			while ((*h && *n) && *h == *n)
			{
				*h++;
				*n++;
			}
			if (*n == '\0')
				return haystack;
			*haystack++;
		}
		return (NULL);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, worldp";
    char *f = "o world";
    char *t, *r;
		
		r = _strstr(s, f);
    t = strstr(s, f);
    printf("%s\n%s\n", t, r);
    return (0);
}
