#include <stdio.h>
/**
 * @brief 
 * 
 * @param dest - string whic src is concatenates
 * @param src  - str to concatenate to end of dest
 * @param n - no of bytes to concatenate
 * @return char* - pointer to the final string
 */

char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;
    int a = 0;
    for (; *dest != '\0'; *dest++);

    while ((a++ < n) && (*dest++ = *src++));
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
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
