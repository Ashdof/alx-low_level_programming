#include "main.h"

/**
 * _memset - fill memory area
 * @s: a pointer to the memory area
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes
 *
 * description: this function fills memory area with a constant byte
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
