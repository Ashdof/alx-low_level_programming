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
 * puts_half - print half of a string
 * @str: a pointer to the string
 *
 * description: this function prints half of a string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int half, n = _strlen(str);
	char *p;

	if ((n % 2) != 0)
		half = (n - 1) / 2;
	else
		half = n / 2;

	p = &str[half];
	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
