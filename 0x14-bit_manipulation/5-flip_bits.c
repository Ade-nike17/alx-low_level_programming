#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: number 1 (source)
 * @m: number 2 (destination)
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}

	return (count);
}
