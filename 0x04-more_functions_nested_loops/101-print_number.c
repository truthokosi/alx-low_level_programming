#include "main.h"
#include <stdio.h>
/**
  *print_number - to print an integer
  *@n: integer
  *Return: always 0 for success
  */

void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar(45);
i = -i;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
