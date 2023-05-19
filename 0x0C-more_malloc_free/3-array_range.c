#include "main.h"
#include <stdlib.h>
/**
  *array_range - to create an array of integers
  *@min: minimum value in array
  *@max: maximum value in array
  *Return: pointer to newly created array else NULL
  */

int *array_range(int min, int max)
{
int t, s;
int *ptr;

if (min > max)
return (NULL);

s = max - min + 1;

ptr = malloc(sizeof(int) * s);

if (ptr == NULL)
return (NULL);

for (t = 0; min <= max; t++)
ptr[t] = min++;

return (ptr);
}
