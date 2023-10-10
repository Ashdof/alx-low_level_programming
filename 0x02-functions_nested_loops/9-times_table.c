#include "main.h"

/**
 * times_table - print 9 times table
 *
 * description: this function prints the 9 times table, starting with
 * 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j, ans;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			ans = i * j;

			if (ans < 10)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');
			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
