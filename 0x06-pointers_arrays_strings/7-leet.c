#include "main.h"

/**
 * leet - encode a string
 * @s: a pointer to the string
 *
 * description: this function encodes the string pointed to by s to
 * 1337
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	int j, i = 0;
	char nums[] = "4307143071";
	char lets[] = "aeotlAEOTL";

	while (s[i] != '\0')
	{
		for (j = 0; lets[j] != '\0'; j++)
		{
			if (s[i] == lets[j])
				s[i] = nums[j];
		}
		i++;
	}

	return (s);
}
