#include "person.h"

int main(void)
{
		person_t bola;
		bola.name = "Bola";
		bola.age = 16;

		printf("%s current age is %d\n", bola.name, bola.age);
    updateAge(&bola, 17);
		printf("One year later %s would be %d\n", bola.name, bola.age);
}
