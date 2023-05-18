#include <stdio.h>
/**
 * @brief - pointer arguments are used to swap as this
 * will access to the values itself, if pointers aren't used the
 * copies of the values get swapped instead not the values themselves
 * 
 * @param a 
 * @param b 
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}