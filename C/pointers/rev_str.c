#include <stdio.h>

void rev_string(char *s)
{
    /* reverses a string */
    char *ptr = s;
    char temp;

    int l = 0, r = 0;
    for (; *ptr != '\0'; *ptr++, r++);
    
    *ptr--;
    while(l++ < r--)
    {
        temp = *s;
        *s++ = *ptr;
        *ptr-- = temp;
    }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
