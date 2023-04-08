#include <stdio.h>
#include "main.h"


/**
 * clear_bit - function sets the value of bit ata given index
 *
 * @n: pointer to number from which bit is retrieved
 * @index: index of bit to be retrieved
 *
 * Return: 1 if it worked and -1 if it failed
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t bit_value = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	bit_value = bit_value << index;
	bit_value = ~bit_value;

	*n = *n & bit_value;

	return (1);
}
