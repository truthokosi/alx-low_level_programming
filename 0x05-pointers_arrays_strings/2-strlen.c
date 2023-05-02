#include "main.h"
/**
  *_strlen - prints the length of a string
  *@s: string to check length
  *Return: the length of the string
  */

int _strlen(char *s)
{
int str_length = 0;
while (*s != '\0')
{
str_length++;
s++;
}
return (str_length);
}
