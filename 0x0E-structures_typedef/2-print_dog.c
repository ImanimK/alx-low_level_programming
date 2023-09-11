#include "dog.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This function creates a struct dog instance, initializes its
 * name, age, and owner fields, and then calls print_dog to print the dog's
 * information.
 *
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

int main()
{
	struct dog my_dog;
	my_dog.name = "Buddy";
	my_dog.age = 3.5;
	my_dog.owner = "John";

	print_dog(&my_dog);

	return (0);
}
