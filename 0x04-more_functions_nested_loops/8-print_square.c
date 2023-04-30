#include "main.h"
#include <stdio.h>
/**
  *print_square - to print the size of a square
  *@size: the size of the square
  *Return: ALways 0 for success
  */

void print_square(int size)
{
int i;
int j;

if (size <= 0)
putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
