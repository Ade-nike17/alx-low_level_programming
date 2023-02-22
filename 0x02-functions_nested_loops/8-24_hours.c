#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int n = 0;

	while (n <= 23)
	{
		int m = 0;

		while (m <= 59)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m += 1;
		}
		n += 1;

	}

}
