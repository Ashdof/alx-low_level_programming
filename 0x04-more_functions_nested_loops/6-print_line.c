#include "main.h"

/**
 * print_line - print a straight line
 * @n: the length of the line
 *
 * description: this function prints a straight line on the terminal
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
