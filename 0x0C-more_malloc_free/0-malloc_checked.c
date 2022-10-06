#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of block of memory to allocate
 *
 * Return: the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *memvar;

	/* allocate memory */
	memvar = malloc(b);
	if (memvar == NULL)
		exit(98);

	return (memvar);
}
