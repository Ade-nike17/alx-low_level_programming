#include "main.h"

/**
 * main - Entry point
 *
 * return 0 - always success
 */

/* funtion print_alphabet returns no value */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
