#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: number of bytes to copy
 *
 * description: this function copies n bytes of the string pointed
 * to by src to the string pointed to by dest
 *
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
