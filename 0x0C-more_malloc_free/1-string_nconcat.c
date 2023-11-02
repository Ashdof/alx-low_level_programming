#include <stdlib.h>

char *_strncat(char *, char *, unsigned int);
int _strlen(char *);
char *_strcpy(char *, char *);
char *string_nconcat(char *s1, char *s2, unsigned int n);

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
	int size, i;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	_strncat(s1, s2, n);
	size = _strlen(s1);
	mem = malloc(sizeof(char) * size + 1);
	if (mem == NULL)
		return (NULL);
	_strcpy(mem, s1);

	return (mem);
}

/**
 * _strncat - join two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of characters to copy
 *
 * description: this function copies n bytes of string src and
 * appends them to the end of string dest
 *
 * Return: a pointer to string dest
 */

char *_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i, len = 0;
	char *p = dest, *q = src;

	while (*p)
		p++;
	for (; *q != '\0'; q++)
		len++;
	if (n >= len)
	{
		for (; *q != '\0'; q++)
			*p++ = *q;
	}
	else if (n < len)
	{
		for (i = 0; i < n; i++)
			*(p + i) = *(q + i);
	}
	*p = '\0';

	return (dest);
}

/**
 * _strlen - compute length of string
 * @s: a pointer to the string
 *
 * description: this function computes the length of a string
 *
 * Return: the computed length
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;

	return (s - p);
}

/**
 * _strcpy - copy string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * description: this function copies the string pointed ti by src to
 * the string pointed to by dest
 *
 * Return: a pointer to the string pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

