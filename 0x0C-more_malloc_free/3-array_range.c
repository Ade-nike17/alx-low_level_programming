#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function creates an array of int
 *
 * @min: minimum range of array
 * @max: maximum range of array
 *
 * Return: ptr to newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr_arr;
	int size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr_arr = malloc(sizeof(int) * size);
	if (ptr_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr_arr[i] = min + i;
	}
	return (ptr_arr);
}
