#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - compute length of a string
 * @s: a pointer to thw string
 *
 * description: this function computes the length of a string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - check for palindrome.
 * @s: a pointer to the string
 * @len: length of the string
 * @index: the index of the string to be checked.
 *
 * Return: 1 if the string is a palindrome - 1. 0 otherwise
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
