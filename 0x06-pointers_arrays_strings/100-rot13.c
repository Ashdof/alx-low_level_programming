#include "main.h"

/**
 * rot13 - encode a string
 * @s: a pointer to the string
 *
 * description: this function encodes a string using rot13
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *s)
{
	int i, j = 0;
	char lets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr \
		       stuvwxyz";
	char keys[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcde \
		       fghijklm";

	while (s[j])
	{
		for (i = 0; i < 52; i++)
		{
			if (s[j] == lets[i])
			{
				s[j] = keys[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
