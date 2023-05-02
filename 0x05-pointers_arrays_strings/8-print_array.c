#include "main.h"
/**
  *print_array - to print elements of an array of integers
  *@a: array
  *@n: lenght of the array
  */

void print_array(int *a, int n)
{
int array;
for (array = 0; array < n; array++)
{
printf("%d", a[array]);
if (array != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
