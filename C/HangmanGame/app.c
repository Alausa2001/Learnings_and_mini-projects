#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
  int rand_idx;
  char *dashed;
  bool continu = true;
  char *arr[] = {"glinty", "Wakanda", "ethereal", "Maxine", "Mugwump", "Strive"};
  char a, b; /* user chars to fill in */

  while (continu)
  {
    rand_idx = randomization();
    if (rand_idx <= 6)
    {
      continu = false;
    }
  }

  dashed = add_dashes(arr[rand_idx]);
  if (dashed == NULL)
    printf("memory allocation failed\n");
  else {
    printf("%s\n", dashed);
    printf("Enter the missing characters, For example in W_t_r the missing characters are 'a' and 'e'\n");
    scanf("%c %c", &a, &b);
    dashed = fill(dashed, a, b);
    if (strcmp(dashed, arr[rand_idx]) == 0)
    {
      printf("Correct!\n The word is %s\n", arr[rand_idx]);
    }
  }
  return 0;
}
