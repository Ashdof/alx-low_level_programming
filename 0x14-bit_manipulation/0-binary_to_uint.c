#include "main.h"

/**
 * binary_to_uint - convert to unisgned integer
 * @b: a pointer to a string of '1's and '0's
 *
 * description: this function converts a binary number to an
 * unsigned integer
 *
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		ans <<= 1;
		ans += *b - '0';
	}

	return (ans);
}
