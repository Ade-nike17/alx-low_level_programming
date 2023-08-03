#include "main.h"

/**
 * get_bit - function gets bit at a specified index
 *
 * @n: decimal number to be checked
 * @index: index of nimber starting from 0
 *
 * Return: value of bit at index or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* check if index is within valid range */
	if (index > 63)
		return (-1);

	/* shift n to the rightmost position */
	bit_value = (n >> index) & 1;

	return (bit_value);
}
