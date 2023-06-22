#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 *
 * @array: an areay of integers
 * @size: size of an integer
 * @cmp: function pointer takes an int arg
 *
 * Return: index of the first element for which
 * cmp function does not return 0,
 * or -1 if no such element is found or if size is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}


