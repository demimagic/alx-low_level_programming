#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 *
 * @grid: 2D grid to free
 * @height: height of grid
 *
 * Description: Frees the memory allocated for a 2D grid of integers.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
