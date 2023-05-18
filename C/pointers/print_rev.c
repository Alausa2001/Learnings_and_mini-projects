#include <stdio.h>

void print_rev(char *s)
{
    /* prints a string in reverse followed by a string */

    for (; *s != '\0'; *s++);


    while (*--s)
    {
        putchar(*s);
    }
    putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
