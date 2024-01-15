#include "main.h"

/**
 * _puts - print a string to the standard output
 * @str: a pointer to the string
 *
 * description: this function prints a string pointed to by str to
 * the standard output
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char *p = str;

	for (; *p != '\0'; p++)
		_putchar(*p);
	_putchar('\n');
}
