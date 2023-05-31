#include "main.h"

char* lower(char *str)
{
		char *ptr = str;
    int i = 0;

		while(str[i])
		{
				str[i] = tolower(str[i]);
				i++;
		}
    return ptr;
}
