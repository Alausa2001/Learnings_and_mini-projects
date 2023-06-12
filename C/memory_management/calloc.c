#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief - The _calloc function allocates memory for an array
 * of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 * 
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * 
 * @param nmemb 
 * @param size 
 * @return void* 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *memory;
    int i = 0;

    if (size == 0 || nmemb == 0)
        return NULL;
    memory = malloc(nmemb * size);

    if (memory == NULL)
        return NULL;
    for(; i < nmemb; i++)
        *(memory + i) = 0;
    return memory;

}


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
