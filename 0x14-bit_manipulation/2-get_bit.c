#include "main.h"

/**
 * get_bit - return bit at index
 * @n: the number in decimal
 * @index: the position to obtain the bit
 *
 * description: this function obtains the value of a bit at a
 * given index
 *
 * Return: the bit value or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int rs;

	/* check index range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	rs = (n & mask) ? 1 : 0;

	return (rs);
}
