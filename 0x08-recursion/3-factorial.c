#include "main.h"

/**
 * factorial - compute factorial
 * @n: the number to compute its factorial
 *
 * description: this function computes the factorial of a given
 * number
 *
 * Return: the computed factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
