#include "main.h"
#include <stdlib.h>
/**
  *create_array - to create an array of chars
  *@size: array size
  *@c: the content of the array
  *Return: pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
unsigned int t;
char *str;

if (size == 0)
return (NULL);
str = malloc(sizeof(char) * size);

if (str == NULL)
return (NULL);

for (t = 0; t < size; t++)
{
str[t] = c;
}
return (str);
}
