#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - functionc reates an array of integers
 *
 * @min: minimum value of integer
 * @max: maximum value of integer
 *
 * Return: ptr to newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
