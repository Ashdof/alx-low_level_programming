#include "main.h"

/**
 * _abs - compute absolute value
 * @n: the value to compute
 *
 * description: this function computes the absolute value of an
 * integer
 *
 * Return: the computed value
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return (n);
}
