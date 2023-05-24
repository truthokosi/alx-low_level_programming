#include "function_pointers.h"
/**
  *array_iterator - this executes a functio given as a parameter
  *on each element of an array
  *@array: the given array
  *@size: the size of the array
  *@action: a pointer to the function to be used
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
