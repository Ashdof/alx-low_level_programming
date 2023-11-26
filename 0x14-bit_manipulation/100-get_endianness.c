#include "main.h"

/**
 * get_endianness - check endian
 *
 * description: this function checks endianness
 *
 * Return: 0 if little endian, 1 if big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte != 0);
}
