#include <stdio.h>
#include "main.h"


/**
 * set_bit - function sets bit to 1 at a given index
 *
 * @n: pointer to number from which bit is retrieved
 * @index: index of bit to be retrieved
 *
 * Return: 1 if it worked, -1 if it failed
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	size_t bit_value = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_value = bit_value << index;

	/* Bitwise OR operation is used to set the bit to 1 */

	*n = *n | bit_value;

	return (1);


}
