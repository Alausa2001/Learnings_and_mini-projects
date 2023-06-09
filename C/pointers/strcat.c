#include <stdio.h>

/**
 * @brief - concatenates a string
 * 
 */

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;
    for (; *dest != '\0'; *dest++);

    while(*dest++ = *src++);
    return ptr;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
