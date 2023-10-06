#include <stdio.h>

/**
 * main - print the alphabets
 *
 * description: this program prints the alphabets in lowercase,
 * followed by uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
