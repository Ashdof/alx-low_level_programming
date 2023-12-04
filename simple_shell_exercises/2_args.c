#include <stdio.h>

/**
 * main - print arguments
 * ac: argument count
 * av: a reference pointer to the arguments
 *
 * description: this program prints all its arguments, without using
 * the ac variable
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int i;

	for (i = 1; av[i]; i++)
		printf("%s ", av[i]);
	printf("\n");

	return 0;
}
