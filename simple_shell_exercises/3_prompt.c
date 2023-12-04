#include <stdio.h>
#include <stdlib.h>

void printTag(void) __attribute__((constructor));

/**
 * main - print a line entry
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer;
	size_t len;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		printf("Error: not enough memory.\n");
		exit(EXIT_FAILURE);
	}

	getline(&buffer, &len, stdin);
	printf("%s", buffer);

	return (0);
}

/**
 * printTag - print a tag
 *
 * Return: nothing
 */
void printTag(void)
{
	printf("$ ");
}
