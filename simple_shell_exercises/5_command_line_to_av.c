#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTag(void) __attribute__((constructor));
int _strtok(char *, char *);

/**
 * main - test the functions
 *
 * Return: Always 0
 */
int main(void)
{
	size_t len = 1024;
	char *mem;

	mem = malloc(sizeof(char) * 1024);
	if (mem == NULL)
	{
		printf("Error: not enough memory\n");
		exit(EXIT_FAILURE);
	}

	getline(&mem, &len, stdin);
	_strtok(mem, " ");

	printf("%s", mem);
	free(mem);

	return (0);
}

/**
 * printTag - print a command line tag
 *
 * Return: nothing
 */
void printTag(void)
{
	printf("$ ");
}


/**
 * _strtok - split a string
 * @str: a pointer to the string to split
 * @delim: a pointer to the delimeter
 *
 * Return: number of characters
 */
int _strtok(char *str, char *delim)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == *delim)
			str[i] = '\n';
	}

	return (i);
}
