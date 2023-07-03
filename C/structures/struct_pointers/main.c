#include "person.h"

int main(void)
{
		person_t bola;
    person_t *new;
		bola.name = "Bola";
		bola.age = 16;

		printf("%s's current age is %d\n", bola.name, bola.age);
    updateAge(&bola, 17);
		printf("Next year, %s would be %d\n", bola.name, bola.age);

    new = createPerson("Bayo", 19);
    printf("\nHi Bola, my name is %s and I am %d years old and I promise to be Bayo-side\n", new->name, new->age);
	
}
