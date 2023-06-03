#include "main.h"

/**
 * add_dashes - replaces some chars in a string with dashes
 * Return: Pointer to the new string
 */

char* add_dashes(char *str) {
  int length = strlen(str);
  char* modified = (char*)malloc((length + 1) * sizeof(char));

  if (!modified)
    return NULL;
  strcpy(modified, str);
  for (int i = 0; i < length; i++) {
    if (i == 1 || i == 4) {
      modified[i] = '_';
    }
    else
    {
      modified[i] = str[i];
    }
  }
  return modified;
}

char* fill(char *str, char a, char b)
{
  int length = strlen(str);
  char* correct = (char*)malloc((length + 1) * sizeof(char));

  if (!correct)
    return NULL;
  strcpy(correct, str);
  for (int i = 0; i < length; i++) {
    if (i == 1)
      correct[i] = a;
    else if (i == 4)
      correct[i] = b;
    else
      correct[i] = str[i];
  }
  return correct;
}
