#include "main.h"

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * is_palindrome - a function that determines if a string is palindrome
 * @s: the given string
 *
 * Return: 1 if string is palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * helper_palindrome - A function with a revesed string
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - return length of string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
