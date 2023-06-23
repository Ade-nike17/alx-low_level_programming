#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function prints numbers
 *
 * @separator: str to be printed btw numbers
 * @n: no of integers passed to the function
 * @...: a variable number of params
 *
 * Return: printed numbers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, print;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print = va_arg(args, int);
		printf("%d", print);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
