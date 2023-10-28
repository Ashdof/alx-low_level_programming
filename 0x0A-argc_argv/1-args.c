#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * description: this program prints the number of arguments passed
 * to it
 *
 * Return: Always 0 (success)
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
