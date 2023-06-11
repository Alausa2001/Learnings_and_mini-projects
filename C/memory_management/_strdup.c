#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str)
{
    int i = 0;
    
    for(; str[i] != '\0'; i++);
    return i;
}

char *_strdup(char *str)
{
    int size = _strlen(str); 
    char *dup;
    int i;

    dup = (char*)malloc(sizeof(char) * size);
    if (!dup)
        return NULL;
    for(i = 0; i < size; i++)
    {
        dup[i] = str[i];
    }
    dup[size] = '\0';
    return dup;
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SOFTWARE ENGINEERING");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
