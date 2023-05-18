#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - to allocate memory using malloc
  *@b: bytes to allocate
  *Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
void *t;

t = malloc(b);

if (t == NULL)
exit(98);

return (t);
}
