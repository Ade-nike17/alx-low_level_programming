#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - function prints strings
 *
 * @separator: str to be printed btw the strings
 * @n: no of strings passed to the function
 * @...: variable number of strings
 *
 * Return: pronted strings
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *print;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(args, char *);
		if (print != NULL)
			printf("%s", print);

		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
