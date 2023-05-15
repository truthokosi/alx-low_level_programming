#include "main.h"
/**
  * _strcpy - copies a string pointed to by src
  * @dest: char type
  * @src: char type string
  * Description: copying the string pointed to by
  * src to the buffer pointed to by dest.
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
int t = -1;

do {
t++;
dest[t] = src[t];
} while (src[t] != '\0');
return (dest);
}
