#include <stdio.h>

/**
 * @brief Set the string object
 * 
 * @param s 
 * @param to 
 */
void set_string(char **s, char *to)
{
		*s = to;	
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
