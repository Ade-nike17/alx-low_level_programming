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

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr_arr = malloc(sizeof(int *) * height);
		if (ptr_arr == NULL)
			return (NULL);
	i = 0;
	while (i < height)
	{
		ptr_arr[i] = malloc(sizeof(int) * width);
		if (ptr_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr_arr[j]);
			}
			free(ptr_arr);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr_arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr_arr);
}


