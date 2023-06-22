#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function iterates through array
 * and executes a function given as a parameter
 *
 * @array: an areay of integers
 * @size: size of array
 * @action: function pointer taked an arg of int
 *
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
