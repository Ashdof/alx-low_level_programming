#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * description: this function creates an array of integers and
 * fills it with values from min (included) to max (included)
 *
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *mem, size, i = 0, j = min;

	if (min > max)
		return (NULL);
	size = max - min;
	mem = malloc(sizeof(int) * size + 1);
	if (mem == NULL)
		return (NULL);
	while (j <= max)
		mem[i++] = j++;

	return (mem);
}
