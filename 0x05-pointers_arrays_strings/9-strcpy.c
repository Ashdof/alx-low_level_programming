#include "main.h"

/**
 * _strcpy - copy string characters
 * @dest: a pointer to the destination string
 * @src: a pointer to source string
 *
 * description: this function copies the characters of the string
 * pointed to by src to the buffer pointed by dest
 *
 * Return: a pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *p = src;

	while (*p++)
		*dest++ = *p;
	*dest = '\0';

	return (dest);
}
