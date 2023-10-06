#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print positive or negative
 *
 * description: this program prints whether a number stored in a
 * variable is positive or negative
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
