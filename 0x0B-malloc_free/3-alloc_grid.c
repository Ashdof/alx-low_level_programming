#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate memory for 2 dimensional array
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * description: this function allocates space in memory for a grid
 * of arrays
 *
 * Return: a pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **mem;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int *) * width);
		if (mem[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mem[i]);
			free(mem);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}

	return (mem);
}
