#ifndef DOG_H
#define DOG_H

/**
  *struct dog - to define a new type with elements
  *@name: The name of the dog
  *@age: The dog's age
  *@owner: The owner of the dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - a new type for dog
  */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
