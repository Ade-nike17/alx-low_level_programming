#include "main.h"

/**
 * print_binary - prints the binary rep of number
 *
 * @n: number to be converted to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary_check;
	int i = 63;
	int count = 0;

	while (i >= 0)
	{
		/* shift the current value of n by 'i' bit to the right */
		binary_check = n >> i;
		if (binary_check & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
		{
			_putchar('0');
		}
		i--;
	}
	if (!count)
		_putchar('0');
}
