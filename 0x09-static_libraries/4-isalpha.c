#include "main.h"
/**
  *_isalpha - checks if a character is alphabetic or not
  *@c: the character
  *Return: 1 if c is an alphabet, 0 if not
  */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
