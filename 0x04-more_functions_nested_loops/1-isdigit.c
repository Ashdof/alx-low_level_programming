#include "main.h"

/**
 * _isdigit - check for digit
 * @c: the character to check
 *
 * description: this function checks whether a character is a digit,
 * from 0 to 9
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (1);

	return (0);
}
