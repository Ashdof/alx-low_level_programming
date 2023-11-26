#include "main.h"

/**
 * print_binary - print a binary number
 * @n: the number in base 10
 *
 * description: this function prints the binary representation of
 * a base 10 number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

	_putchar('\n');
}
