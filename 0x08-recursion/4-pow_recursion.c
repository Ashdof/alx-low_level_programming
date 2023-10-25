#include "main.h"

/**
 * _pow_recursion - compute power of a number
 * @x: the base number
 * @y: the exponent number
 *
 * description: this function computes the value of x raised to the
 * power y
 *
 * Return: the computed value
 */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow *= _pow_recursion(x, y - 1);

	return (pow);
}
