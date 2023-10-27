#include "main.h"

/**
 * _atoi - convert to integer
 * @s: a pointer to the string
 *
 * description: this function converts a string to an integer
 *
 * Return: a pointer to the integer
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int op = 1;
	char *p = s;

	while (*p != '\0' && (*p < '0' || *p > '9'))
	{
		if (*p == '-')
			op *= -1;
		p++;
	}

	for (; *p != '\0' && *p >= '0' && *p <= '9'; p++)
	{
		if (*p < '0' || *p > '9')
			return (0);
		n = n * 10 + *p - '0';
	}

	return (n * op);
}
