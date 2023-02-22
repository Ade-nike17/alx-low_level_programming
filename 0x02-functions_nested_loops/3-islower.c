#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 *@c: character to be checked
 *
 * return: 1 if character is lowercase and 0 if otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

