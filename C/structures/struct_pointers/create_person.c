#include "person.h"

person_t *createPerson(char *name, int age)
{
		person_t *new_person;

		new_person = malloc(sizeof(person_t));
		
		if (new_person == NULL)
		{
				printf("Memory allocation failed\n");
				return NULL;
		}
		new_person->name = name;
		new_person->age = age;
		return new_person;
}
