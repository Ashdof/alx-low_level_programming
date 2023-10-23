#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: a pointer to the string
 * @needle: a pointer to the substring
 *
 * description: this function searches for a substring
 *
 * Return: a pointer to the location of the first occurrence of
 * needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i])
		}
		haystack++;
	}

	return ('\0');
}
