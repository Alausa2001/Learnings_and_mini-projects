#include <stdio.h>
#include <string.h>

int _strpbrk(char s1[], char s2[])
{
  /* returns the index of the fisrt
   * char in s1 that matches any of the
   * chars in s2
   */

  int i = 0, j = 0;

  while (s1[i] != '\n' && s2[j] != '\n')
  {
    if (s1[i] == s2[j++])
    {
      return i;
    }
    if (s2[j] == '\0')
    {
      j = 0;
      ++i;
    }
  }
  return -1;
}

int main(void)
{
  printf("%d\n", _strpbrk("52314", "1"));
  printf("%s\n", strpbrk("52314", "1"));
}
