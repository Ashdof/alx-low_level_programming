#include "main.h"

/**
 * string_toupper - change to uppercase
 * @s: a pointer to the string
 *
 * description: this function changes all lowercase of a string to
 * uppercase
 *
 * Return: a pointer to the string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if  (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
