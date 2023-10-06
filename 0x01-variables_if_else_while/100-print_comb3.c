#include <stdio.h>

/**
 * main - print combinations
 *
 * description: this program prints all possible combinations of two
 * digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
