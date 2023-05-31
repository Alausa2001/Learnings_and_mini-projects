#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* string manipulators declaration */
char* lower(char *str);
char* reverse(char *str);
char* upper(char *str);

/* function pointer */

extern char* (*manipulator[3])(char*);
#endif
