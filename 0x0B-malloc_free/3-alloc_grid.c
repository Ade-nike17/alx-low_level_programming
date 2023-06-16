#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - function creates a 2D array of int
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: ptr to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_arr;

	i = 0;
	if (width <= i)
		return (NULL);
	if (height <= i)
		return (NULL);

	ptr_arr = malloc(sizeof(int *) * width);
		if (ptr_arr == NULL)
			return (NULL);

	while (i < width)
	{
		ptr_arr[i] = malloc(sizeof(int) * height);
		if (ptr_arr[i] == NULL)
		{
			return (NULL);
		}
		i++;
	}
	j = 0;
	while (i < width)
	{
		while (j < height)
		{
			ptr_arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr_arr);
}


