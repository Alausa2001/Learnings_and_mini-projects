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
  char *answer;

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
    answer = fill(dashed, a, b);
    if (strcmp(answer, arr[rand_idx]) == 0)
    {
      printf("Correct!\nThe word is %s\n", arr[rand_idx]);
    }
    else
      printf("Incorrect\n");
  }
  free(dashed);
  free(answer);
  return 0;
}
