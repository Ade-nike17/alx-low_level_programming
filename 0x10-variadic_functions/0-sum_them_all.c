#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - function sums all its params
 *
 * @n: first arg
 *
 * Return: sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	unsigned int result = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i  = 0; i < n; i++)
	{
		sum = va_arg(args, int);
		result += sum;
	}
	va_end(args);
	return (result);
}
