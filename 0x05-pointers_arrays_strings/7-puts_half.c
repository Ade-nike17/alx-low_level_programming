#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: str to be halved
 *
 * Return: void
 */

void puts_half(char *str)
{
	int c = 0;
	int n;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 1)
	{
		n = (c - 1) / 2;
		n += 1;
	}
	else
	{
		n = c / 2;
	}

	for (; n < c; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
