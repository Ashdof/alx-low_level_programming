#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * description: this function prints numbers from 0 through 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
