#include "main.h"
/**
  *_memset - a function that fills the first n bytes
  *@s: the pointer
  *@b: the constant bytes
  *@n: unsigned integer -number of bytes
  *Return: return pointer to the memory area 's'
  */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
