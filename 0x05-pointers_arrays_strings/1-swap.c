#include "main.h"
#include <stdio.h>
/**
  *swap_int - function to swap the value of two integers
  *@a: integer to swap with b
  *@b: integer to swap with a
  *Return: Always 0 for success
  */

void swap_int(int *a, int *b)
{
int truth;
truth = *a;
*a = *b;
*b = truth;
}
