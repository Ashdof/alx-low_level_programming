#include <stdio.h>

/**
 * main - print combinations
 *
 * description: this program prints all possible combinations of
 * single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
