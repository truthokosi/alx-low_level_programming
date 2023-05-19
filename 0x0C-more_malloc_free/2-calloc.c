#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

/**
  *_memset - fills memory area with a constant byte
  *@s: memory area to fill
  *@b: content to fill
  *@n: number of times to fill with b
  *Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;

for (t = 0; t < n; t++)
{
s[t] = b;
}
return (s);
}

/**
  *_calloc - memory allocation for an array
  *@nmemb: number of elements in the array
  *@size: size of each element
  *Return: pointer to the allocated memory, else NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
