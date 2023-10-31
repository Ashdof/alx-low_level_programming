#include <stdlib.h>
#include "main.h"

/**
 * str_concat - join two strings
 * @s1: the destination string
 * @s2: the source string
 *
 * description: this function concatenates two strings, allocates
 * a space in memory and initialises it with a copy of the joined
 * strings
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, size = 0, j = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		size++;
	mem = malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		mem[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		mem[j++] = s2[i];

	return (mem);
}
