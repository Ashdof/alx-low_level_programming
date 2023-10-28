#include <stdio.h>
#include <stdlib.h>

/**
 * main - print argument vectors
 * @argc: argument count
 * @argv: argument vectors
 *
 * description: this program prints all arguments passed to it
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
