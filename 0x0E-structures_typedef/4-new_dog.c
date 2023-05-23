#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
  *_strlen - to fid the length of a string
  *@str: the string
  *Return: the length of the string.
  */

int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;

return (length);
}


/**
  *_strcpy - copying a string
  *@dest: destination string
  *@src: source string
  *Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
int t = 0;

for (; src[t]; t++)
dest[t] = src[t];

dest[t] = '\0';
return (dest);
}


/**
  *new_dog - to create a new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: dog's owner
  *Return: the new struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *smart;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

smart = malloc(sizeof(dog_t));
if (smart == NULL)
return (NULL);

smart->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (smart->name == NULL)
{
free(smart);
return (NULL);
}

smart->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (smart->owner == NULL)
{
free(smart->name);
free(smart);
return (NULL);
}

smart->name = _strcpy(smart->name, name);
smart->age = age;
smart->owner = _strcpy(smart->owner, owner);

return (smart);
}

