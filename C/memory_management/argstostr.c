#include <stdio.h>
#include <stdlib.h>


int len(char *str)
{
    int i = 0;

    for(; str[i] != '\0'; i++)
        ;
    return i;
}


char *argstostr(int ac, char **av)
{
    char *str;
    int i = 0;
    int k = 0;
    int l = ac;

    if (ac == 0 || av == NULL)
        return NULL;
    for(i = 0; i < ac; i++)
    {
        l += len(av[i]);
    }

    str = (char*)malloc((l+1) * sizeof(char));
    if(!str)
      return NULL;

    for(i = 0; i < ac; i++)
    {
        for(int j = 0; (j < len(av[i]) ) && (*av[i] != '\0'); j++)
        {
            str[k++] = av[i][j];
        }
        str[k++] = '\n';
    }
    str[k] = '\0';
    return str;
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
