#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of blocks to allocate
 * @size: size of each block
 *
 * description: this function allocates blocks of memory
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	p = mem;
	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (mem);
}
