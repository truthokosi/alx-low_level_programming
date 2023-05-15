#include "main.h"
/**
  *_memset - function to fill/copy an unsigned char b to
  * the first n bytes of a memory
  * area pointed to by s
  *@s: the pointer to the memory areat to be filled with b
  *@b: value to be set/filled with
  *@n: number of bytes to be set with the value b
  *Return: pointer to the memory area/block s
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
