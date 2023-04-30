#include "main.h"
#include <stdio.h>
/**
  *print_triangle - print triangle using hashtags
  *Description: prints diagonals
  *@size: number of times to print
  *Return: Always 0 for success
  */

void print_triangle(int size)
{

int tabs, hashtag, line;
if (size <= 0)
{
putchar('\n');
}
else
{
for (line = 1; line <= size; line++)
{
for (tabs = size - line; tabs >= 1; tabs--)
{
putchar(' ');
}
for (hashtag = 1; hashtag <= line; hashtag++)
{
putchar('#');
}
putchar('\n');
}
}
}
