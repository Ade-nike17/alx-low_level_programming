#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: first value
 * @y: value raise to the power of
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		result = _pow_recursion(x, y / 2);
		return (result * result);
	}
	else
	{
		result = _pow_recursion(x, y / 2);
		return (result * result * x);
	}
}
