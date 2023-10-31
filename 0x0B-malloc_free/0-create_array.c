#include <stdlib.h>
#include "main.h"

/**
 * create_array - allocate memory
 * @size: the value to use to compute memory size
 * @c: the character to use to initialise the allocated memory
 *
 * description: this function creates an array of characters and
 * initialises it with a specific character
 *
 * Return: a pointer to the allocated memory, or NULL if memory
 * cannot be allocated
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mem;

	if (size == 0)
		return (NULL);

	mem = malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		mem[i] = c;

	return (mem);
}
