#include <stdio.h>

/**
 * print_array - print array elements
 * @a: a pointer to the array or elements
 * @n: the number of elements in the array
 *
 * description: this function prints the elements in an array, up to
 * the number specified by the parameter n
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i == n - 1)
			printf("\n");
		else
			printf(", ");
	}
}
