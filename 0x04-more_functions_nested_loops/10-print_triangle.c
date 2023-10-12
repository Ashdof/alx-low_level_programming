#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 *
 * description: this function prints a triangle on the terminal using
 * the # character
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
}
