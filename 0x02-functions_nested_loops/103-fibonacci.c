#include <stdio.h>

/**
 * main - sum all even terms
 *
 * description: this program finds and computes the sum of even terms
 * of a fibonacci sequence less than 4000000
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long next, first = 0, second = 1;
	float ans = 0;

	for (;;)
	{
		next = first + second;
		if (next > 4000000)
			break;

		if ((next % 2) == 0)
			ans += next;

		first = second;
		second = next;
	}
	printf("%.0f\n", ans);

	return (0);
}
