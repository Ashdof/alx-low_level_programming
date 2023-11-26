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
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
