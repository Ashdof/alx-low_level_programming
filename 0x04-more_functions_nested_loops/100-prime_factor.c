#include <stdio.h>

/**
 * main - find and print largest prime factor
 *
 * description: this program finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: nothing
 */

int main(void)
{
	long i = 0, num = 612852475143;

	while (i < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
				num /= i;
		}
	}

	printf("%ld\n", num);

	return (0);
}
