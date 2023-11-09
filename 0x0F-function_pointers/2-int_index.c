#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: a pointer to the array
 * @size: the size of the array
 * @cmp: a pointer to the function that compares array elements
 *
 * description: this function compares array elements
 *
 * Return: the index for the first element at which the function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || (*cmp) == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
