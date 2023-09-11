#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void init_dog(dog_t *d, char *name, float age, char *owner)
{
    char *error_message = "Error: NULL pointer received for struct dog.\n";

    if (d == NULL)
    {
        fprintf(stderr, "%s", error_message);
        exit(EXIT_FAILURE);
    }

    d->name = name;
    d->age = age;
    d->owner = owner;
}

int main()
{
    dog_t my_dog;
    char *name = "Buddy";
    float age = 3.5;
    char *owner = "John";

    init_dog(&my_dog, name, age, owner);

    printf("Dog's name: %s\n", my_dog.name);
    printf("Dog's age: %.1f\n", my_dog.age);
    printf("Dog's owner: %s\n", my_dog.owner);

    return (0);
}
