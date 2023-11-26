#include "main.h"

/**
 * clear_bit - clear a bit
 * @n: a pointer to the number in decimal
 * @index: the position to clear the bit
 *
 * description: this function clears a bit at a given index
 *
 * Return: 1 on success, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* check range of index */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
