#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase characters
 *
 * return value - 1 if char is lowercase and 0 if otherwise
 *
 * c - the character to be checked
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

