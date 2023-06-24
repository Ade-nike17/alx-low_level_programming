#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function prints anything
 *
 * @format: all types of args passed to the function
 * @...: a variable number of params
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char c;
	int i, is _first_arg;
	float f;
	char *s;
	const char *ptr;

	va_list args;

	va_start(args, format);

	ptr = format;
	is_first_arg = 1;
	while (*ptr != '\0')
	{
		if (is_first_arg == 0)
			printf(", ");
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		is_first_arg = 0;
		ptr++;
	}
	printf("\n");
	va_end(args);
}
