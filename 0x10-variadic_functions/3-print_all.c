#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);
void print_all(const char * const format, ...);

/**
 * print_char - print a character
 * @arg: the character to print
 *
 * description: this function prints a character
 *
 * Return: nothing
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - print an integer
 * @arg: the integer value to print
 *
 * description: this function prints an integer value
 *
 * Return: nothing
 */

void print_int(va_list arg)
{
	int value;

	value = va_arg(arg, int);
	printf("%d", value);
}

/**
 * print_float - print a floating point number
 * @arg: the floating point value to print
 *
 * description: this function prints a floating point number
 *
 * Return: nothing
 */

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - print an array of characters
 * @arg: the array of characters to print
 *
 * description: this function prints a string
 *
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (string == NULL)
		printf("(nil)");

	printf("%s", string);
}

/**
 * print_all - print anything
 * @format: list of types
 * @...: an elipsis indicating variable length of arguments
 *
 * description: this function prints all arguments passed to it,
 * based on the format specifier
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int j, i = 0;
	char *sep = "";
	va_list args;
	printer_t specs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i)) != *(specs[j].symbol))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			specs[j].print(args);
			sep = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
