#include "main.h"
/**
  *puts_half - to print half of a string
  *@str: the string to be printed
  */

void puts_half(char *str)
{
int full;
int half;

full = 0;
while (str[full] != '\0')
full++;

half = full / 2;
if (full / 2 == 1)
half++;
while (half < full)
{
putchar(str[half]);
half++;
}
putchar('\n');
}
