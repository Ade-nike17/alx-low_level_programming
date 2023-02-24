#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9)
 *
 * @c: digit to be checked
 *
 * Return: returns 1 if c is a digit
 * otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
