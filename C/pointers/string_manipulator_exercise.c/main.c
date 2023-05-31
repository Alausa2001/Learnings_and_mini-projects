#include "main.h"

int main(void)
{
  char* (*manipulator[3])(char*) = { lower, upper, reverse };
  char arr[6];
  int i;
  
  printf("Welcome to ABS string manipulation service\nEnter a string, string should contain 5 or less characters\n");
  scanf("%s", &arr);
  if (strlen(arr) > 5)
  {
    printf("Length of array is greater that 5\n");
    return 0;
  }
  printf("Enter 0 to turn sting to lowercase\nEnter 1 to turn sting to uppercase\n");
  printf("Enter 2 to turn sting to reverse string\n");
  scanf("%d", &i);
  if (i < 0 || i > 2)
  {
    printf("invalid operation\n");
    return 0;
  }
  char *result = (*manipulator[i])(&arr);
  printf("%s\n", result);
  return 1;
}
