#include "stdio.h"

/**
 * _strlen - compute length of string
 * @s: a pointer to the string variable
 *
 * description: this function computes the length of a string pointer
 * to by s
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;

	return (s - p);
}
