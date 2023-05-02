#include "main.h"
#include <stdio.h>
/**
  *print_rev - to print a string in reverse
  *@s: the string to be printed
  */

void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
putchar(s[start]);
putchar('\n');
}
