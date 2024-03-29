#include <stdio.h>

/**
 * main - print combinations
 *
 * description: this program prints all possible combinations of
 * three digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
