#include <stdio.h>

/**
 * main - print the alphabets
 *
 * description: this program prints the alphabets in lowercase,
 * excluding the letters e and q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}
