#include "main.h"
#include <stdio.h>

/**
  *print_line - print lines
  *@n: number of times to print
  *Return: Always 0 for success
  */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}

