#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * description: this program prints the first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long next, first = 0, second = 1;

	for (i = 0; i < 50; i++)
	{
		next = first + second;
		printf("%lu", next);

		first = second;
		second = next;
		
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
