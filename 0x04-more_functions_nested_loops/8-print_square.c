#include "main.h"

/**
 * print_square - function prints a square
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	/*Declare i and j as integers */
	int i, j;

	/**
	*if the size is less than or equal too zero
	*print the new line character
	*/

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		/*iterate i from 1 to size */
		for (i = 1; i <= size; i++)
		{
			/*print a single # character) */
			_putchar('#');

			/*iterate j from 1 to size -1 */
			for (j = 1; j < size; j++)
			{
				/*print another # character */
				_putchar('#');
			}
			/**
			*after printing several lines of # character
			*print a new line
			*/
			_putchar('\n');
		}

	}

}
