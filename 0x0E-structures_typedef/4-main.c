#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog structure.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This function creates a new dog structure and initializes its
 * name, age, and owner fields.
 *
 * Return: A pointer to the new dog structure. NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates the creation of a new dog structure
 * using the new_dog function and prints information about the dog.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");

	if (my_dog == NULL)
	{
	fprintf(stderr, "Failed to create a new dog.\n");
	return (1);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	free(my_dog);

	return (0);
}
