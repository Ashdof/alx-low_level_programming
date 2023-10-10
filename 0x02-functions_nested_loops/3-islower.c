#include "main.h"

/**
 * _islower - check lowercase
 * @c: the character to check for lowercase
 *
 * description: this function checks whether the character passed as
 * argument is lowercase or not
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	return (0);
}
