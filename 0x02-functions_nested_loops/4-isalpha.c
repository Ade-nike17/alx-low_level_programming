#include "main.h"

/**
 * _isalpha - checks if the character is an alphabet
 *
 * @c: the character to be checked
 *
 * Return: 1 for alphabetic character and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
