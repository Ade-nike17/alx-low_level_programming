#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name
 *
 * @name: name to be printed
 * @f: function pointer takes char * as arg
 *
 * Retuen: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
