#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: a pointer to the name to print
 * @f: a pointer to the function that prints a name
 *
 * description: this function prints a name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
