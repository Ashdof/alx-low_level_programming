#include "main.h"

/**
 * puts2 - print every other character
 * @str: a pointer to the string
 *
 * description: this function prints every other character of a
 * string, starting with the first character, followed by a new line.
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	char *p = str;

	while (*(p + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*p);

		i++;
	}
	_putchar('\n');
}
