#include "main.h"
/**
  *_strncat - to concatenate two strings up to n characters long
  *@dest: pointer to first string(dest)
  *@src: pointer to second string(src)
  *@n: max number of characters to be appended
  *Return: pointer to the resulting dest string
  */

char *_strncat(char *dest, char *src, int n)
{
int size1, size2;

size1 = 0;
while (dest[size1] != '\0')
{
size1++;
}
for (size2 = 0; size2 < n && src[size2] != '\0'; size2++, size1++)
{
dest[size1] = src[size2];
}
dest[size1] = '\0';
return (dest);
}
