#include <stdio.h>
#include "main.h"

/**
 * get_bit - function retrieves bit at index position
 *
 * @n: number from which bit is retrieved
 * @index: index of bit to be recieved
 *
 * Return: -1 if failed, 1 if bit is set and 0 if bit is not set
 */


int get_bit(unsigned long int n, unsigned int index)
{
	size_t bit_value = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	bit_value = bit_value << index;

	if (n & bit_value)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
