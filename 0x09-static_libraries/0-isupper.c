#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: the character to check
 *
 * description: this function checks whether a character is uppercase
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
