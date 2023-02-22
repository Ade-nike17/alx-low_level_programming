#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function prints all natural numbers to 98
 *
 * @n: natural number to be printed to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	else if (n > 98) 
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if ( n == 98)
	{
		printf("%d\n", n);
	}
}
