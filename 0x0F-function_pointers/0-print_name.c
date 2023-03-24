#include <stdio.h>

/**
 * print_name - function prints names
 *
 * @name: pointer to a character array
 * @f: function pointer takes pointer to a character array as an argument
 * but returns nothing
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
