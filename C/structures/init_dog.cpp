#include <stdio.h>

struct dog {
    char *name;
    char *owner;
    float age;
};


/**
 * @brief - Write a function that initialize a variable of type struct dog
 * 
 * @param d 
 * @param name 
 * @param age 
 * @param owner 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
