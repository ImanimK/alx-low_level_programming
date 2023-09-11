#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    if (name == NULL || owner == NULL)
    {
        return (NULL);
    }

    new_dog = (dog_t *)malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        return (NULL);
    }

    new_dog->name = strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->age = age;

    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    return (new_dog);
}

int main()
{
    char *name = "Buddy";
    float age = 3.5;
    char *owner = "John";

    dog_t *my_dog = new_dog(name, age, owner);

    if (my_dog != NULL)
    {
        printf("New dog's name: %s\n", my_dog->name);
        printf("New dog's age: %.1f\n", my_dog->age);
        printf("New dog's owner: %s\n", my_dog->owner);
    }
    else
    {
        printf("Failed to create a new dog.\n");
    }

    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}
