#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This function initializes a dog structure with the provided
 * values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
	{
	fprintf(stderr, "Error: NULL pointer received for struct dog.\n");
	exit(EXIT_FAILURE);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates the initialization of a dog structure
 * using the init_dog function and then prints information about the dog.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	struct dog my_dog;
	char *name = "Buddy";
	float age = 3.5;
	char *owner = "John";

	init_dog(&my_dog, name, age, owner);

	printf("Dog's name: %s\n", my_dog.name);
	printf("Dog's age: %.1f\n", my_dog.age);
	printf("Dog's owner: %s\n", my_dog.owner);

	return (0);
}
