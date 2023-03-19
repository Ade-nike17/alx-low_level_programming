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
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		ptr[i] = min + 1;

	return (ptr);

}
