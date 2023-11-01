#include <stdlib.h>

int _strlen(char *);
char *_strcat(char *, char *);

/**
 * _strlen - compute length of string
 * @str: a pointer to the string
 *
 * description: this function computes the length of a string.
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	char *p = str;

	while (*str)
		str++;

	return (str - p);
}

/**
 * _strcat - join two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * description: this function copies bytes from the source string
 * and appends them to the end of the destination string
 *
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest, *q = src;

	while (*p)
		p++;
	for (; *q != '\0'; q++)
		*p++ = *q;
	*p = '\0';

	return (dest);
}

/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: a reference pointer to the list of arguments
 *
 * description: this function concatenates all of its arguments
 *
 * Return: a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, size = 0;
	char *mem;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += _strlen(av[i]);
	mem = malloc(sizeof(char) * size + 1);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(mem, av[i]);
		_strcat(mem, "\n");
	}

	return (mem);
}
