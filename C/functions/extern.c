#include <stdio.h>

extern int max = 0;

int incr(int max)
{
  return max+1;
}

int mul(int max)
{
  return max*3;
}

int main(void)
{
  int i, j;

  i = incr(max);
  j = mul(max);
  printf("i = %d, j = %d\n", i, j);
}
