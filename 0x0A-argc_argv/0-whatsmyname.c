#include <stdio.h>

/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector
 *
 * description: this program prints its name
 *
 * Return: Always 0 (success)
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
