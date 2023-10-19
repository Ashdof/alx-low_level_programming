#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: a pointer to the array of integers
 * @n: the number of elements in the array
 *
 * description: this function reverses the contents of an array of
 * integers
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
