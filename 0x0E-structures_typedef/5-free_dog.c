#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function frees memory allocated for the name, owner,
 * and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates the creation of a new dog structure
 * using the new_dog function, and then frees the memory allocated for the dog
 * structure using the free_dog function.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char *name = "Buddy";
	float age = 3.5;
	char *owner = "John";

	dog_t *my_dog = new_dog(name, age, owner);


	free_dog(my_dog);

	return (0);
}
