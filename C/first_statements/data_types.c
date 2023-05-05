#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: returns 0
 */

int main(void)
{
    printf("The size of char is %lu bytes\n", sizeof(char));
    printf("The size of int is %lu bytes \n", sizeof(int));
    printf("The size of float is %lu bytes\n", sizeof(float));
    printf("The size of long int is %lu bytes\n", sizeof(long));
    printf("The size of long long int is %lu bytes\n", sizeof(double));
    return (0);
}
