#include <stdio.h>

/**
 * main - print sum of multiples
 *
 * description: this program computes and prints the sum of all the
 * multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, ans = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			ans += i;
	}
	printf("%d\n", ans);

	return (0);
}
