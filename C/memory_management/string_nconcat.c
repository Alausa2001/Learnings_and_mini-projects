#include <stdio.h>
#include <stdlib.h>

int len(char *str)
{
    int i = 0;

    for (; *(str + i) != '\0'; i++)
        ;
    return i;
}

char *copy(int start, char *dest, char *src, int n)
{
    int i = 0;
    for (; (i < n) && (src[i] != '\0'); i++)
    {
        dest[start++] = src[i];
    }
    return dest;
}

/**
 * @brief - function that concatenates two strings.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return char* -  returned pointer shall point to a
 * newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    int length;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 == "";

    if (n > len(s2))
        n = len(s2);
    length = len(s1) + n;
    str = (char *)malloc(sizeof(char) * length);
    if (str == NULL)
        return NULL;
    str = copy(0, str, s1, len(s1));
    str = copy(len(s1), str, s2, n);
    str[length] = '\0';
    return str;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 9);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
