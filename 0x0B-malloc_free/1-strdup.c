#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int getStrLen(char *ch);

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the passed string of characters
 *
 * Return: returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	/* Initialise control variables */
	char *memvar;
	int i = 0;

	if (str == NULL)
		return (NULL);

	/* Allocate memory */
	memvar = malloc((sizeof(char) * getStrLen(str)) + 1);
	if (memvar == NULL)
		return (NULL);

	/* Copy parameter values to allocated memory */
	while (i < getStrLen(str))
	{
		memvar[i] = str[i];
		i++;
	}

	return (memvar);
}

/**
 * getStrLen - obtain the length of a string of characters
 * @ch: the string of characters to determine its length
 * Return: the length of the string of characters
 */

int getStrLen(char *ch)
{
	int n;

	for (n = 0; *ch != '\0'; ch++)
		n++;

	return (n);
}
