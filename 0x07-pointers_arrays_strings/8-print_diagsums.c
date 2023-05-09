#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - prints the sums of two diagonals of
  *a sqaure matrix of integers
  *@a: the matrix of integers
  *@size: size of the matrix
  *Return: void
  */

void print_diagsums(int *a, int size)
{
int i, val1 = 0, val2 = 0;

for (i = 0; i < size; i++)
{
val1 += a[i];
a += size;
}
a -= size;

for (i = 0; i < size; i++)
{
val2 += a[i];
a -= size;
}
printf("%d, %d\n", val1, val2);
}
