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
int count, compare;

count = 0;
while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}
compare = s1[count] - s2[count];
return (compare);
}
