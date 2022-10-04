#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: the character to initialise with
 *
 * Return: returns a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *mempointer;

	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory to the mempointer variable */
	mempointer = (char *) malloc(size * sizeof(c));
	if (mempointer == NULL)
	{
		return (NULL);
	}

	/*
	 * Initialise memory at each index location with the
	 * specified character
	 */
	while (i < size)
	{
		mempointer[i] = c;
		i++;
	}

	return (mempointer);
}
