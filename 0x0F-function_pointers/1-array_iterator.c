#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on array elements
 * @array: a pointer to the array of integers
 * @size: the size of the array
 * @action: a pointer to the function to execute
 *
 * description: this function executes a function given as
 * parameter on each element of an array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
