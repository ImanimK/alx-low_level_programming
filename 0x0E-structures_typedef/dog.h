#ifndef DOG_H
#define DOG_H

/* Structure definition */
struct dog
{
  char name[20];
  float age;
  char owner[20];
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
