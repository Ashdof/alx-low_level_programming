#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of block of memory to allocate
 *
 * Return: the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memvar;

	/* allocate memory */
	memvar = malloc(b);
	if (memvar == NULL)
		exit(98);

	return (memvar);
}
