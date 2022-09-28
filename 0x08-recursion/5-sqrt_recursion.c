#include "main.h"

int wrapper(int x, int y);

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number
 *
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	return (wrapper(1, n));
}

/**
 * wrapper - compares two given numbers in finding the square root
 * @x: first int number
 * @y: second int number
 *
 * Return: first number compared to second number
 */

int wrapper(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (wrapper(x += 1, y));
}
