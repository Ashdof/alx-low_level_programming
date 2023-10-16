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
	char *p = str;

	for (; *p != '\0'; p += 2)
		_putchar(*p);
	_putchar('\n');
}
