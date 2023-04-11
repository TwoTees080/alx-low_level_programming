#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid created by alloc_grid function
 * @grid: pointer to grid created
 * @height: height of grid
 *
 * Return: freed grid
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
