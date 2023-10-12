#include <stdio.h>

/**
 * main - print Fizz Buzz
 *
 * description: this program prints numbers from 1 to 100. It prints
 * FizzBuzz for numbers that are multiples of 3 and 5, Fizz for
 * multiples of 3 and Buzz multiples of 5. Other numbers are printed
 * as they are
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
