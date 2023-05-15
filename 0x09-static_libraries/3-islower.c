#include "main.h"
/**
  *_islower - checks if a character is lowercase
  *@c: character to check
  *Return: 1 if c is lowercase, otherwise o
  */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
