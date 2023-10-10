#include "main.h"

/**
 * print_sign - print sign of number
 * n: the number
 *
 * description: this function prints the sign of a number
 *
 * Return: 1 if number is positive, 0 if it is 0 and -1 if it is
 * negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
