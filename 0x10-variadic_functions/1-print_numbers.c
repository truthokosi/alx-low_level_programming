#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_numbers - function to print numbers
  *@separator: the string to be printed between the numbers
  *@n: number of arguments/params passed through the function
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && t == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}

	va_end(ap);
	printf("\n");
}
