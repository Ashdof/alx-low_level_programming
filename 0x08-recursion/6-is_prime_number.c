#include "main.h"

int is_divisible(int, int);
int is_prime_number(int);

/**
 * is_divisible - check divisibility
 * @num: the number to be divided
 * @div: the number to divide the num
 *
 * description: this function checks the divisibility of a number
 *
 * Return: a number
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: the number to check
 *
 * description: this function checks whether a number is prime
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
