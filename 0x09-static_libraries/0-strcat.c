#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: a pointer the destination string
 * @src: a pointer to the source string
 *
 * description: this function copies the characters pointed to by
 * src to the end of the string pointed to by dest.
 *
 * Return: a pointer to the string pointed to by dest
 */

char *_strcat(char *dest, char *src)
{
	char *q, *p = dest;

	while (*p)
		p++;
	for (q = src; *q != '\0'; q++)
		*p++ = *q;
	*p = '\0';

	return (dest);
}
