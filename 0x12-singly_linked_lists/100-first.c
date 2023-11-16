#include <stdio.h>

void executeBeforeMain(void) __attribute__((constructor));

/**
 * executeBeforeMain - print statment
 *
 * description: this function prints a statement before the the
 * execution of the main function
 *
 * Return: nothing
 */

void executeBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore "
		"my house on my back!\n");
}
