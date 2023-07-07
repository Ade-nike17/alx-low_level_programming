#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at a given
 * index
 *
 * @n: pointer to the number
 * @index: index starting from 0
 *
 * Return: 1 if it worked and -1 if it failed
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);


	*n &= ~(1UL << index);

	return (1);
}
