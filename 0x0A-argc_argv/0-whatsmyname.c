#include <stdio.h>

/**
 * main - function to print the name of the programme
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		printf("No argument supplied\n");
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
