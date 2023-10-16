#include "main.h"

/**
 * _strlen - compute length of string
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
 * print_rev - print a string in reverse
 * @s: a pointer to the string
 *
 * description: this function prints a string in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *p = &s[_strlen(s) - 1];

	while (*p)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
