#include <stdio.h>

/**
 * main - print alphabets
 *
 * description: this program prints the alphabets in lowercase, using
 * the putchar() function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
