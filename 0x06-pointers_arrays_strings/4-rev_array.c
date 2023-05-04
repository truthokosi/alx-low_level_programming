#include "main.h"
/**
  *reverse_array - to reverse the content of an array of integers
  *@a: pointer to an array
  *@n: number of elements of the array
  *Return: void
  */

void reverse_array(int *a, int n)
{
int rev, arr;

n = n - 1;
arr = 0;
while (arr <= n)
{
rev = a[arr];
a[arr++] = a[n];
a[n--] = rev;
}
}
