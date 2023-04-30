#include "main.h"
#include <stdio.h>
/**
  *print_diagonal - print diagonal lines
  *@n: number of times to print
  *Return: Always 0 for success
  */

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
