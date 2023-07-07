#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert a binary num to uint
 *
 * @b: pointer to string of 0 and 1
 *
 * Return: converted num or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int uint_num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint_num = 2 * uint_num + (b[i] - '0');

		i++;
	}

	return (uint_num);
}
