#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function converts binary to unsigned int
 *
 * @b: string contains 0 amd 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int conv_num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		conv_num = (conv_num << 1) + (b[i] - '0');
		i++;
	}
	return (conv_num);
}

