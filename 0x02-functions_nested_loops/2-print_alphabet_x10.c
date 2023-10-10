#include "main.h"

/**
 * print_alphabet_x10 - print alphabets
 *
 * description: this function prints the alphabeta in lowercase, ten
 * times, followed by a new line character
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar('\n');
	}
}
