#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2 dimensional array grid
 * @grid: a double pointer 2 dimensional array grid
 * @height: height of array grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
