#include <stdio.h>

int main(void)
{
  int x = 1, y = 2;
  int *ip;

  ip = &x;
  printf("init value of x is %d and y is %d\n", x, y);

  printf("ip is now %d\n", *ip);
  y = *ip;
  printf("y changes to the init value of x = %d\n", y);
  *ip += 13;
  printf("x changes to the value of assigned to the pointer =  %d\n", x);

  return 0;
}
