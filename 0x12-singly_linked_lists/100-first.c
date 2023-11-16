#include "lists.h"

void executeBeforeMain(void) __attribute__((constructor));

void executeBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore ");
	printf("my house on my back!\n");
}
