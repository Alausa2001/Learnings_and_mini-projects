#include <stdio.h>

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char *_strchr(char *s, char c)
{
    while(*s)
    {
        if (*s == c)
        {
            return s;
        }
        *s++;
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
    char *s = "hello";
    char *f;

    f = _strchr(s, 'e');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
