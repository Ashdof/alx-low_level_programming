#include "main.h"

/**
 * _strlen - compute length of string
 * @str: a pointer to the string
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
 * rev_string - reverse a string
 * @s: a pointer to the string
 *
 * description: this function reverses the characters of a string
 * literal
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp, *p = s, *q = &s[_strlen(s) - 1];

	while (p < q)
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
}
