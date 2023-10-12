#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * description: this function prints all numbers from 0 to 9, except
 * 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = 47;

	while (i++ < 57)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
