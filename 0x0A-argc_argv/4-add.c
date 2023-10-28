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
	int i, ans = 0;

	if (argc - 1 == 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 0 && atoi(argv[i]) > 9)
			{
				printf("Error\n");
				return (1);
			}
			ans += atoi(argv[i]);
		}
		
		printf("%d\n", ans);
	}


	return (0);
}
