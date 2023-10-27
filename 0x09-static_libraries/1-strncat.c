#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: a pointer to the source string
 * @dest: a pointer to the destination string
 * @n: the number of characters to copy
 *
 * description: this function copies atmost n bytes of the string
 * pointed to by src to the end of the string pointed to by dest
 *
 * Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
