#include "main.h"

/**
 * flip_bits - flip bits
 * @n: the starting number
 * @m: the number to flip to
 *
 * description: this function computes the number of bits that need
 * to be flipped to get from @n to @m
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int i = 0;

	/* count bits that need to be flipped */
	while (mask > 0)
	{
		i += mask & 1;
		mask >>= 1;
	}

	return (i);
}
