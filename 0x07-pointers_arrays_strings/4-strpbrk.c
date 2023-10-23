#include "main.h"

/**
 * _strbrk - search a string
 * @s: the string to search
 * @accept: the object to search for
 *
 * description: thia function searches a string for any of a set of
 * bytes
 *
 * Return: a pointer in s that matches one of the bytes in accept,
 * NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
