#include <stdio.h>
#include <string.h>

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return  
 */
void swap (char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief - sorts an array of texts
 * 
 * @param text 
 */
void sort(char *text[], int size)
{
    int i = 0;
    int j;

    for (; i < size - 1; i++)
    {
        for (j = i + 1 ; j < size; j++)
        {
            if (strcmp(text[i], text[j]) > 0)
            {
                swap(&text[i], &text[j]);
            }
        }
    }
}

void main(void)
{
    char *text[] = { "edfg", "hij", "abc" };
    int size = sizeof(text) / sizeof(text[0]);
    
    sort(text, size);
    for (int i = 0; i < size; i++)
      printf("%s\n", text[i]);
    /* printf("%d\n", strlen(text)); */
}
