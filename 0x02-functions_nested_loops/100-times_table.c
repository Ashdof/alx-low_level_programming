#include "main.h"

/**
 * print_times_table - print times table
 * @n: the times table to print
 *
 * description: thia function prints the times table of a specified
 * number
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, ans;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				ans = i * j;

				if (ans <= 9)
					_putchar(' ');
				if (ans <= 99)
					_putchar(' ');
				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar((ans / 100) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
					_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
