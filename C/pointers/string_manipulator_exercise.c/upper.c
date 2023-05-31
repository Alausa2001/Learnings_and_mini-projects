#include "main.h"

char* upper(char* str)
{
    char *ptr = str;
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
    return ptr;
}
