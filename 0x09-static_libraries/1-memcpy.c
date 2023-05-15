#include "main.h"
/**
  *_memcpy - function copies n bytes from one memory area
  * to another
  *@src: memory area to copy from
  *@dest: memory area copying to
  *@n: number of bytes to copy
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int area = 0;
while (area < n)
{
dest[area] = src[area];
area++;
}
return (dest);
}
