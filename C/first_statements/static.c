#include <stdio.h>

/* 
 * Difference between a variable declared with
 * a static qualifier and one which is not
 *
 * static variables lifetime is throughout the program runtime
 */

int static_calc() 
{
    static int num = 0; /* initialized once throughtout the program */
    num++;
    return (num);
}

int calc()
{
    int num = 0; /* initialized every time the function is called */
    num++;
    return (num);
}

void main(void)
{
    /* output = 3, 2, 1 */
    printf("%d, %d, %d\n", static_calc(), static_calc(), static_calc());

    /* output = 1, 1, 1 */
    printf("%d, %d, %d\n", calc(), calc(), calc());
}
