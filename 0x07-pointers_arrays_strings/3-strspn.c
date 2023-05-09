#include "main.h"
/**
  *_strspn - funtion to get the length of a prefix substring
  *@s: string to be searched
  *@accept: the prefix
  *Return: the number of bytes of s from accept
  */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
n++;
break;
}
else if (accept[j + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
