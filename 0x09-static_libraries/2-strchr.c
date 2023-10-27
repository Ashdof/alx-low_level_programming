#include "main.h"

/**
 * _strchr - locate a character
 * @s: a pointer to the string
 * @c: the character to locate
 *
 * description: this function locates a character in a string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
