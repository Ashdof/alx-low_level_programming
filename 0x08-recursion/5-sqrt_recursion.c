#include "main.h"

int _sqrt_recursion(int);
int compute_root(int, int);

/**
 * _sqrt_recursion - compute natural square root
 * @n: the number to compute its square root
 *
 * description: this function computes the natural square root
 * of a number
 *
 * Return: square root of the number or -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n== 1)
		return (1);

	return (compute_root(root, n));
}

/**
 * compute_root - compute the root of a number
 * @root: the number that increments by 1 and tested
 * @n: the number to find its square root
 *
 * description: this function increments a value by 1 consistently
 * and test its result for the square root of the assigned number
 *
 * Return: the square root
 */

int compute_root(int root, int n)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (-1);

	return (compute_root(root + 1, n));
}
