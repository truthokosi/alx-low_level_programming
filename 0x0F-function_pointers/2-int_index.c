#include "function_pointers.h"
/**
  *int_index - a function that searches for an integer
  *@array: array of integers in which to search
  *@size: the array size
  *@cmp: a pointer to the function to be used in comparing values
  *Return: the index of the first element for which the cmp function
  *  does not return 0 else return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
int ind;

if (array == NULL || cmp == NULL)
return (-1);

for (ind = 0; ind < size; ind++)
{
if (cmp(array[ind]) != 0)
return (ind);
}
return (-1);
}
