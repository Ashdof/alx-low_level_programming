#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals
 * @a: a pointer to the matrix
 * @size: the size of the matrix
 *
 * description: this function computes and prints the sum of diagonals
 * of two square matrix of integers
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, ans = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		ans += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, ans);
}
