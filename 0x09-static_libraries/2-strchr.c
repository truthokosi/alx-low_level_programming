#include "main.h"
/**
  *_strchr - searches for the first occurence of a character c
  * in the string s
  *@s: the string to be searched
  *@c: the character to be searched for in str
  *Return: pointer to the first occurence of c, NULL if c is absent
  */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
return (0);
}
}
