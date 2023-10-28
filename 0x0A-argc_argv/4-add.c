#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * description: this program adds positive numbers
 *
 * Return: 1 if argument is not a digit, otherwise always 0
 */

int main(int argc, char **argv)
{
	int i, j, ans = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		ans += atoi(argv[i]);
	}
	printf("%d\n", ans);

	return (0);
}
