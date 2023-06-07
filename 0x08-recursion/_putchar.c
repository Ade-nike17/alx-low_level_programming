#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function prints out a single character
 *
 * @c: character to be printed
 * Return: nothing
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
