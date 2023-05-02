#include "main.h"
/**
  * puts2 - print every other character of a string
  * @str: the string to print
  */

void puts2(char *str)
{
int t = 0;
while (str[t] != '\0')
{
if (t % 2 == 0)
{
putchar(str[t]);
}
t++;
}
putchar('\n');
}
