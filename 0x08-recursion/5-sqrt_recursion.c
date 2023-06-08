#include "main.h"

/**
 * sqrt_recursion_helper - function finds the sqr of n
 *
 * @n: number to check the sqr
 * @start: low range of n
 * @end: high range of n
 *
 * Return: the range of square of n
 */

int sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	square = mid * mid;

	if (square == n)
		return (mid);

	if (square > n)
		return (sqrt_recursion_helper(n, start, mid - 1));
	return (sqrt_recursion_helper(n, mid + 1, end));
}


/**
 * _sqrt_recursion - function finds the sqrt of a given num
 *
 * @n: find the sqrt of n
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion_helper(n, 0, n));
}
