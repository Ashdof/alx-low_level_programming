#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: the character to check
 *
 * description: this function checks whether its argument is an
 * alphabet or not
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}
