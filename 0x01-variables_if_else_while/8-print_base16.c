#include <stdio.h>

/**
 * main - print base 16 numbers
 *
 * description: this function prints all the numbers of base 16 in
 * lowercase using putchar() function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
