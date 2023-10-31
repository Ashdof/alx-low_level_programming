#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2 dimensional array
 * @grid: a reference pointer to the grid
 * @height: the hegiht of the array
 *
 * description: this function frees a two dimensional grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
