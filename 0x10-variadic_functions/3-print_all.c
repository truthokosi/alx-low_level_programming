#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_all - a function that prints anything
  *@format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	int t = 0;
	char *s, *p = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", p, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					t++;
					continue;
			}
			p = ", ";
			t++;
		}
	}
	printf("\n");
}
