#include "main.h"

/**
 * swap_int - swap numbers
 * @a: the first number
 * @b: the second number
 *
 * description: this function swaps the values of two integer
 * variables
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
