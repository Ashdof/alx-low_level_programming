#include "variadic_functions.h"

/**
 * print_stringss - print strings
 * @separator: a pointer to the separator
 * @n: the number of parameters passed to the function
 *
 * description: this function prints a series of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *text;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		text = va_arg(args, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (text == NULL)
			printf("(nil)");
		else
			printf("%s", text);
	}

	va_end(args);
	printf("\n");
}
