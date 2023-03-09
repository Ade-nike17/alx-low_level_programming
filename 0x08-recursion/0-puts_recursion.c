#include "main.h"

/**
 * puts_recursion - prints a string
 *
 * @s: string to be printed
 *
 * Return: pointer to string
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');

}
