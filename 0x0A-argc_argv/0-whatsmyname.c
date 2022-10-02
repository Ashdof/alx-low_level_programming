#include <stdio.h>

/**
 * main - function to print the name of the programme
 * @argc: the number of commands supplied
 * @argv: the array of arguments supplied
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j = argc - argc;

	printf("%s\n", argv[j]);

	return (0);
}
