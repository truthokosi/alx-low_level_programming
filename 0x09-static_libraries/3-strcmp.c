#include "main.h"
/**
  *_strcmp - compares two strings
  *@s1: pointer to first string
  *@s2: pointer to second string
  *Return: Less than 0 if string is less than the other,
  *and greater tha 0 f string is greater than other
  */

int _strcmp(char *s1, char *s2)
{
int a, b;

a = 0;
while (s1[a] == s2[a] && s1[a] != '\0')
{
a++;
}
b = s1[a] - s2[a];
return (b);
}
