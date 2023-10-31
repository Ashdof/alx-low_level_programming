#include <stdlib.h>

int _strlen(char *);
char *_strcpy(char *, char *);

/**
 * _strlen - compute length of string
 * @s: a pointer to the string
 *
 * description: this function computes the length of a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;

	return (s - p);
}

/**
 * _strcpy - copy a string
 * @dest: a pointer to the destination variable
 * @src: a pointer to the string
 *
 * description: this function copies bytes of a string
 *
 * Return: a pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - allocate memory and copy string
 * @str: a pointer to the string to duplicate
 *
 * description: this function allocates space in memory, and
 * initialises it with a copy of its string parameter
 *
 * Return: a pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int size;
	char *mem;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	mem = malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	_strcpy(mem, str);

	return (mem);
}
