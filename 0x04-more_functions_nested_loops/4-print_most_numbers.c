#include "main.h"
#include <stdio.h>
/**
  *print_most_numbers - prints some numbers except 2 and 4
  *Return: Always 0 for success
  */

void print_most_numbers(void)
{
int i = 48;

while (i <= 57)
{
if (i == 50 || i == 52)
{
i++;
continue;
}
putchar(i);
i++;
}
putchar('\n');
}
