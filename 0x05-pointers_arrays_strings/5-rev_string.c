#include "main.h"
#include <stdio.h>
/**
  *rev_string - reverses a string
  *@s: string to print in reverse
  */

void rev_string(char *s)
{
char truth = s[0];
int okosi = 0;
int m;

while (s[okosi] != '\0')
okosi++;
for (m = 0; m < okosi; m++)
{
okosi--;
truth = s[m];
s[m] = s[okosi];
s[okosi] = truth;
}
}
