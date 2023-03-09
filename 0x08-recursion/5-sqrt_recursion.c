#include "main.h"

int _actual_sqrt_recursion(int n, int l, int u);
/**
 * _sqrt_recursion - function prints natural square root of a number
 *
 * @n: number to be checked
 *
 * Return: natural square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);


	return (_actual_sqrt_recursion(n, 1, n));
}

/**
 * _actual_sqrt_recursion - funnction checks for range
 *
 * @n: number to be checked
 * @l: start of range
 * @u: end of range
 *
 * Return: natural square root of number
 */

int _actual_sqrt_recursion(int n, int l, int u)
{
	int mid;

	if (l > u)
	{
		return (-1);
	}

	mid = (l + u) / 2;


	if (mid * mid == n)
		return (mid);

	else if (mid * mid < n)

		return (_actual_sqrt_recursion(n, mid + 1, u));


	else
		return (_actual_sqrt_recursion(n, l, mid - 1));
}
