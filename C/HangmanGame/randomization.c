#include "main.h"

/**
 * randomization - generates random intergers (0 - 10)
 *
 * Return: returns the random number generated
 */

int randomization(void)
{
  sleep(1);
  int random;
  srand(time(0));
  random = rand();
  return (random % 10);
}
