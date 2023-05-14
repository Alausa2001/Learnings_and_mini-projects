#include <stdio.h>
#include <string.h>

/*
 * strindex - checks if a substring in present in a given string
 * @str: given string
 * @pat: substring
 * Return: the index of the first char of the substring if present
 *
 */

int strindex(char str[], char pat[])
{
		int i, j, k;

		for (i=0; str[i] != '\0'; ++i)
		{
				for (j = i, k = 0; (pat[k] != '\0' && str[j] == pat[k]); j++, k++); 
				if (pat[k] == '\0')
						return i;
		}
		return -1;
}

int main(void)
{
		char *idx;
		int i;

		i = strindex("abcapdef", "cap");
		idx = strstr("abcapdef", "cap");
		printf("%s\n", idx);
		printf("%d\n", i);
}
