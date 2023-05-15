#include "main.h"
/**
  *_strlen - prints the length of a string
  *@s: string to check length
  *Return: the length of the string
  */

int _strlen(char *s)
{
int t = 0;

while (*s != '\0')
{
t++;
s++;
}
return (t);
}
