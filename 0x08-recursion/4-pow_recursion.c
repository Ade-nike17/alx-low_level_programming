#include "main.h"

/**
 * _pow_recursion - function returns the value of x to power y
 *
 * @x: base number
 * @y: power
 *
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x / _pow_recursion(x, -y - 1));
}
