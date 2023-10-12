#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the length of the line
 *
 * description: thia function prints a diagonal line on the terminal
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int blank, i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			for (blank = 0; blank < i; blank++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
