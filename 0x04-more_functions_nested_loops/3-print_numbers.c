#include "main.h"

/**
 * print_numbers - function prints numbers from 0 - 9
 * followed by a new line
 *
 * @i: number to be checked
 *
 * Return: void!
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
