#include "main.h"

/**
 * _print_rev_recursion - print reverse
 * @s: a pointer to the string
 *
 * description: this function prints a string in reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
