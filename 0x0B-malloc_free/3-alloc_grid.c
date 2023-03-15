#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function returns pointer to a 2 dimensional array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **dim = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dim = malloc(sizeof(int*) * height);

	if (dim == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		dim[i] = malloc(sizeof(int) * width);

		if (dim[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(dim[j]);
			}
			free(dim);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			dim[i][j] = 0;
		}
	}
	return (dim);


}

