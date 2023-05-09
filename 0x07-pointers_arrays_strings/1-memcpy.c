#include "main.h"
/**
  *_memcpy - function copies n bytes from memory area
  *@src: memory area copying from
  *@dest: memory area copying to
  *@n: number of bytes to copy
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
