#include <stdio.h>

/**
 * array_iterator - executes function given as a param on each element of array
 *
 * @array: pointer to an array of integer
 * @size: size of array
 * @action: pointer function that takes int as an arg and returns nothing
 *
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
