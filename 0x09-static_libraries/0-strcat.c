#include "main.h"
/**
  *_strcat - function that concatentates/combines two strings
  *@dest: first string pointer (destination)
  *@src: second string pointer (source)
  *Return: pointer to resulting string(dest)
  */

char *_strcat(char *dest, char *src)
{
int sizedest, sizesrc;

sizedest = 0;
while (dest[sizedest] != '\0')
{
sizedest++;
}
for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++, sizedest++)
{
dest[sizedest] = src[sizesrc];
}
dest[sizedest] = '\0';
return (dest);
}
