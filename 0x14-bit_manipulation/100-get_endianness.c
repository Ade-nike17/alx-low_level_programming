#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 1 if little endian and 0 if big endian
 */

int get_endianness(void)
{
	size_t i = 1;

	if (((sizeof(unsigned long int) * 8) & i) != 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
