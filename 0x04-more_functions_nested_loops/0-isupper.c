#include "main.h"

/**
 * _isupper - function checks for uppercase characters
 *
 * @c: character to be checked
 *
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
