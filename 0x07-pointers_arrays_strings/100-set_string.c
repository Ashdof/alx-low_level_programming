#include "main.h"

/**
 * set_string - set pointer to char
 * @s: a double pointer to a string
 * @to: the character to set to
 *
 * description: this function sets the value of a pointer to char
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
