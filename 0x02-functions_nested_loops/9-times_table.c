#include "main.h"

/**
 * times_table - function prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row;
	int col;
	int mul = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mul = (row * col);
			if (mul < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar (mul + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (col != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
