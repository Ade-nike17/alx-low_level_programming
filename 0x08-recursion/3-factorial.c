#include "main.h"

/**
 * factorial - function returns ! of a given num
 *
 * @n: the given number
 * Return: factorial of given number
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	fact = n * factorial(n - 1);
	return (fact);
}
