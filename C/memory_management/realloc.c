#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief - reallocates a memory block using malloc and free
 * 
 * @param ptr: a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @param old_size: is the size, in bytes, of the allocated space for ptr
 * @param new_size: is the new size, in bytes of the new memory block
 * @return void*: 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;
	int idx;

	if (new_size == old_size)
		return ptr;
	if (ptr == NULL)
	{
		new_memory = malloc(new_size);
		if (new_memory == NULL)
			return NULL;
		return new_memory;
	}
	if (ptr && new_size == 0)
	{
		free(ptr);
		return NULL;
	}
	new_memory = malloc(new_size + old_size);
	for(idx = 0; idx < old_size; idx++)
		*((char*)new_memory + idx) = *((char*)ptr + idx);
	free(ptr);
	return new_memory;
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
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
