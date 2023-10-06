#include <stdio.h>

/**
 * main - print single base 10 digits
 *
 * description: this program prints all single digit numbers of base
 * 10, starting from zero
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
