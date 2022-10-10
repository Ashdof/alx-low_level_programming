#include <stdio.h>

/**
 * main - entry point for the programme
 * Description:  program that prints the name of the file it was
 * compiled from, followed by a new line. This function makes use
 * of the standard library
 *
 * Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
