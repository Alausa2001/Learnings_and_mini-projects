#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str)
{
    int i;

    for(i = 0; str[i] != '\0'; i++);
    return i;
}

char *str_concat(char *s1, char *s2)
{
    int size = _strlen(s1) + _strlen(s2);

    char *concat;
    int i;
    int j;

    if (!s1 || !s2)
        return NULL;
    concat = (char*)malloc(sizeof(char) * size);
    if (!concat)
        return NULL;

    for (i = 0; i < _strlen(s1); i++)
    {
        concat[i] = s1[i];
    }

    for (j = 0; j < _strlen(s2); i++, j++)
    {
        concat[i] = s2[j];
    }
    concat[size] = '\0';
    return concat;
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty Holberton", ", a woman of valor.");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
