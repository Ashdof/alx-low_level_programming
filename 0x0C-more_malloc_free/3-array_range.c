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
	size = max - min + 1;
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	while (i < size)
		mem[i++] = j++;

	return (mem);
}
