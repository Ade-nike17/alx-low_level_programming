#include "main.h"
#include <ctype.h>

/**
 * main - entry point
 *
 * return 1 - if char is lowercasw
 *
 * return 0 - if otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

