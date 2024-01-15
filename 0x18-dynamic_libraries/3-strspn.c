#include "main.h"

/**
 * _strspn - compute length
 * @s: a pointer to the string
 * @accept: a ponter to the substring
 *
 * description: this function computes the length of a prefix substring
 *
 * Return: the number of bytes in the initial segment s which
 * consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
