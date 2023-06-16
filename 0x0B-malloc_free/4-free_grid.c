#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees 2D grid
 *
 * @grid: grid to be freed
 * @height: heifht of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

