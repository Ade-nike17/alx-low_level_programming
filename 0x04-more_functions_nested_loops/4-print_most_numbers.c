#include "main.h"

/**
 * print_most_numbers - function prints numbers fri]om 0 - 9
 * except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
