#include "main.h"

/**
 * print_alphabet - print the alphabets
 *
 * description: this function prints the alphabets in lowercase,
 * followed by a new line character
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
