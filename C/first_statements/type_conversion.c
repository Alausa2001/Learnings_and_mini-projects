#include <stdio.h>
char to_lower(char s)
{
  /* convert uppercase character to lower case */
  return (s + 32);
}
void main(void)
{
  char n;

  n = to_lower('W');
  putchar(n);
  putchar('\n');
}
