#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char *name;
  int age;
} person_t;

void updateAge(person_t *ptr, int age);
person_t *createPerson(char *name, int age);

#endif
