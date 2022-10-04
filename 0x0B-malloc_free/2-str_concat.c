#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int getStrLen(char *ch);

/**
 * str_concat - return a pointer to a newly allocated memory in space
 * which contains a concatenated string
 * @s1: the first string of characters
 * @s2: the second string of characters
 *
 * Return: a pointer to a newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *memvar;
	int i = 0, j = 0, str1, str2, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the lengths of each parameter */
	str1 = getStrLen(s1);
	str2 = getStrLen(s2);
	len = str1 + str2;

	/* Allocate memory */
	memvar = malloc(sizeof(char) * (len + 1));
	if (memvar == NULL)
		return (NULL);

	while (i < len)
	{
		if (i >= str1)
		{
			memvar[i] = s2[j];
			j++;
			i++;
		}
		else
		{
			memvar[i] = s1[i];
			i++;
		}
	}

	return (memvar);
}

/**
 * getStrLen -obtain the length of a string
 * @ch: the string of characters to determine length
 *
 * Return: length of string
 */

int getStrLen(char *ch)
{
	int n;

	for (n = 0; *ch != '\0'; ch++)
		n++;

	return (n);
}
