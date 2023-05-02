#include "main.h"
#include <stdio.h>
/**
  *_puts - to print a string
  *@str: string we're printing
  */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
