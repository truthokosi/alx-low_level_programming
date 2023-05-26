#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - function to return the sum of all its parameters
  *@n: total no of arguments/params passed into the function
  *Return: the sum result
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
