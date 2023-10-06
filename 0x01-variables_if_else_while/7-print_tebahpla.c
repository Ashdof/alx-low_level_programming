#include <stdio.h>

/**
 * main - print the alphabets
 *
 * description: this program prints the lowercase alphabets in
 * reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
