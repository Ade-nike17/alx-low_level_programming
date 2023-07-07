#include "main.h"

/**
 * flip_bits - function flip bits from one num
 * to another
 *
 * @n: number to be flipped
 * @m: to get to this number
 *
 * Return:number of bits flipped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, bits_flipped = 0;
	unsigned long int complement;
	unsigned long int current;

	complement = n ^ m;
	while (i >= 0)
	{
		current = complement >> i;
		if (current & 1)
			bits_flipped++;

		i--;
	}
	return (bits_flipped);
}


