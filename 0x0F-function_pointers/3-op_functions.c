#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: the first  integer value
 * @b: the second integer value
 *
 * description: this function computes the sum of two integers
 *
 * Return: sum of values
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: the first  integer value
 * @b: the second integer value
 *
 * description: this function computes the difference of two integers
 *
 * Return: difference of values
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: the first  integer value
 * @b: the second integer value
 *
 * description: this function computes the product of two integers
 *
 * Return: product of values
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: the first  integer value
 * @b: the second integer value
 *
 * description: this function computes the result of two integer
 * values by dividing the first value by the second value
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute remainder of two integers
 * @a: the first  integer value
 * @b: the second integer value
 *
 * description: this function computes the remainder of two integer
 * values by dividing the first value by the second value
 *
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
