#include <stdio.h>

/**
 * main - print single base 10 digits
 *
 * description: this program prints all single digit numbers of base
 * 10, starting from zero using the putchar() function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
