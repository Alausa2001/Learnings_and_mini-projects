#include <stdio.h>

int main(void)
{
  char operator;
  float a, b;

  printf("Welcome to Express Calculator\n");

  printf("Enter an Operator (+, -, *, /)\n");
  scanf("%c", &operator);
  printf("Enter the first digit\n");
  scanf("%f", &a);
  printf("Enter the second digit\n");
  scanf("%f", &b);

  switch(operator) 
  {
    case '+':
      printf("%.1f + %.1f = %.1f\n", a, b, a + b);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f\n", a, b, a - b);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f\n", a, b, a * b);
      break;
     case '/':
      printf("%.1f / %.1f = %.1f\n", a, b, a / b);
      break;
    default:
      puts("Invalid operation");
  }
  return (0);
}
