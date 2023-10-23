#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n: the size of memory to copy
 *
 * description: this function copies memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
