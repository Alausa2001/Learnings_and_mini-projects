#include <stdio.h>

int (*fun_ptr) (int, int);

/* perimeter if a rectangle */
int perimeter(int a, int b)
{
		return (2 * (a + b));
}

int main(void)
{
		int answer;
		int ptr_ans;

		fun_ptr = perimeter;
		/* call with function */
		answer = perimeter(2, 3);
		printf("Function call: perimeter = %d\n", answer);
		/* call with function pointer */
		ptr_ans = fun_ptr(2, 3);
		printf("Through function pointer: perimeter = %d\n", ptr_ans);
}
