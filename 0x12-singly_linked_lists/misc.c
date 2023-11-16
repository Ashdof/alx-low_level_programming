#include "lists.h"

/**
 * _strlen - compute length of string
 * @s: a pointer to the string
 *
 * description: this function computes the length of a given string
 *
 * Return: number of characters as length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (p - s);
}

/**
 * _strcpy - copy string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * description: this function copies bytes from src to dest
 *
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
