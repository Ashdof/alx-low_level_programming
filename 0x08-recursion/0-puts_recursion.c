#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: a pointer to the string
 *
 * description: this function prints a string using recursion
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
