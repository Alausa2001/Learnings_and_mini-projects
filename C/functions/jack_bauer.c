#include <stdio.h>

/*
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: None
 */
void jack_bauer(void)
{
  int i;
  int j;

  for (i = 0; i < 24; i++)
  {
    for (j = 0; j < 60; j++)
    {
      putchar((i / 10) + '0');
      putchar((i % 10) + '0');
      putchar(':');
      putchar((j / 10) + '0');
      putchar((j % 10) + '0');
      putchar('\n');
    }
  }
}

int main(void)
{
  jack_bauer();
  return (0);
}
