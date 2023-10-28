#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * description: this program multiplies two integers
 *
 * Return: 1 if the program does not receive two arguments, otherwise
 * always 0
 */

int main(int argc, char **argv)
{
	int ans;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);

	return (0);
}
