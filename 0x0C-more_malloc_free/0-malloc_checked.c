
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates memory allocation
 * @b: unsigned it
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
