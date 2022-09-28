#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the given number
 *
 * Return: -1 if error or the factorial of the number
 */

int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		res = n * factorial(n - 1);
	}

	return (res);
}
