#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int _putchar(int c) /* defines function putchar */
{
	return (write(1, &c, 1));
}
int main(void) /* defines function main */
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
