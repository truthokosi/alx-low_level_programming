#include "main.h"
#include <stdlib.h>
/**
  *_realloc - changes the size of a memory block
  *@ptr: pointer to a memory area previously allocated using malloc
  *@old_size: size of the allocated space for ptr
  *@new_size: new size of the new memory block
  *Return: pointer to newly allocated memory area
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int t;
char *n_ptr;
char *o_ptr;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));

n_ptr = malloc(new_size);
if (!n_ptr)
return (NULL);

o_ptr = ptr;

if (new_size < old_size)
{
for (t = 0; t < new_size; t++)
n_ptr[t] = o_ptr[t];
}

if (new_size > old_size)
{
for (t = 0; t < old_size; t++)
n_ptr[t] = o_ptr[t];
}
free(ptr);
return (n_ptr);
}
