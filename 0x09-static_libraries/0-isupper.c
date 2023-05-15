#include "main.h"
/**
  *_isupper - to check if a character is uppercase
  *@c: character to be checked
  *Return: 1 if character is uppercase, 0 if not
  */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
