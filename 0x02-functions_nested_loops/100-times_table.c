#include "main.h"

/**
 * print_times_table - prints the n time tables starting with 0
 *
 * @n: value of time table to be printed
 *
 */

void print_times_table(int n)
{
	int num_1;
	int num_2;
	int mul;

	if (n >= 0 && n <= 15)
	{
		for (num_1 = 0; num_1 <= n; num_1++)
		{
			_putchar('0');

			for (num_2 = 1; num_2 <= n; num_2++)
			{
				_putchar(',');
				_putchar(' ');
			

				mul = num_1 * num_2;

				if (mul <= 99)
				{
					_putchar(' ');
				}
				if (mul <= 9)
				{
					_putchar(' ');
				}

				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar((mul / 10) % 10 + '0');
				}
				else if (mul <= 99 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
	
			}
			_putchar('\n');
	
		}

	}
}
