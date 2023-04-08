#include <stdio.h>
#include "main.h"

/**
 * print_binary - function prints binary representation of num
 *
 * @n: unsigned long int to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
