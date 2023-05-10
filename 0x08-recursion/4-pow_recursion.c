#include "main.h"
/**
  *_pow_recursion - funtion the value of an int raiseed to the
  *power of another int
  *@x: base int
  *@y: power int
  *Return: the result. -1 if y is less than 0
  */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
