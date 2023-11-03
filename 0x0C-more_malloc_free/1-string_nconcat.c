#include <stdlib.h>

/**
 * string_nconcat - join two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: number of bytes to copy
 *
 * description: this function copies n bytes from the string pointed
 * to by s2 and appends them to the end of the string pointed to by
 * s1
 *
 * Return: a pointer to the joined strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size = n;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;
	mem = malloc(sizeof(char) * (size + 1));
	if (mem == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		mem[size++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		mem[size++] = s2[i];
	mem[size] = '\0';

	return (mem);
}
