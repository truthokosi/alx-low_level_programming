#include "main.h"
/**
  *_strpbrk - to locate the first occurence
  * in the string 's' of any of the bytes in the string 'accept'
  *@s: string to be searched
  *@accept: string to match
  *Return:  pointer to the byte in s that matches one of
  *the bytes in accept or NULL if none is found
  */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
