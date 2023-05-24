#include <stdio.h>
#include <string.h>

/**
 * @brief - function that searches a string for any of a set of bytes.
 * 
 * @param s: pointer to array to scan
 * @param accept: pointer of array containing the search chars
 * @return char* 
 */
char *_strpbrk(char *s, char *accept)
{
    char *ptr = accept;

    if (s == NULL || accept == NULL)
      return NULL;

    while(*s++)
    {
      accept = ptr;
      while(*accept++)
      {
        if (*s == *accept)
          return s;
      }
    }
    return NULL;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;
    char *real;

    t = _strpbrk("First, solve the problem. Then, write the code.", "School");
    real = strpbrk("First, solve the problem. Then, write the code.", "School");

    printf("%s\n%s\n", t, real);
    return (0);
}
