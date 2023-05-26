#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_strings - function to print only strings
  *@separator: the separator between strings
  *@n: the number of arguments passed through the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");

		if (separator == NULL)
			continue;

		else if (separator && t == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}
