#include "main.h"

/**
 * print_numbers - print numbers
 *
 * description: this function prints numbers from 0 through 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
