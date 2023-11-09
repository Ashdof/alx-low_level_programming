#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: a pointer to the separator
 * @n: the number of parameters passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%d", value);
	}

	va_end(args);
	printf("\n");
}
