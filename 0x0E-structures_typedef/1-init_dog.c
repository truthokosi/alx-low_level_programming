#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - a function to initialize a variable of type struct dog
  *@d: the dog
  *@name: the dog's name
  *@age: the dog's age
  *@owner: the name of the dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
