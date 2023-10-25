#include "main.h"

/**
 * _strlen_recursion - compute length of string
 * @s: a pointer to the string
 *
 * description: this function computes the length of a string by
 * recursion
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
