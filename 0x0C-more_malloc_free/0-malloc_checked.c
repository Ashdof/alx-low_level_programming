#include <stdlib.h>

/**
 * malloc_checked - allocate space in memory
 * @b: the size of memory space to allocate
 *
 * description: this function allocates space in memory using
 * malloc() function
 *
 * Return: a pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
