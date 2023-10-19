#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * description: this function compares two strings
 *
 * Return: a value less than, greater than or equal to 0 depending
 * on whether s1 is less than, greater than or equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
