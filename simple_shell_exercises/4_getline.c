#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

ssize_t _getline(char **, size_t *, FILE *);

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
           }

	stream = fopen(argv[1], "r");
	if (stream == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != -1) {
		printf("Retrieved line of length %ld:\n", nread);
		fwrite(line, nread, 1, stdout);
	}

	free(line);
	fclose(stream);

	exit(EXIT_SUCCESS);
}

/**
 * _getline - read a line of string from stream
 * @s: a reference pointer to a space in memory to read data
 * into
 * @n: a pointer to the maximum length of line
 * @stream: a pointer to the file to read from
 *
 * Return: number of bytes in a line read
 */
ssize_t _getline(char **s, size_t *n, FILE *stream)
{
	size_t i, min = 120;
	int c, counter = 1;
	char *mem;

	mem = malloc(sizeof(char) * (*n) + 1);
	if (mem == NULL)
		return (-1);

	if (*n == 0)
		*n = min;

	for (i = 0; c != '\n' && c != EOF; ++i)
	{
		c = getc(stream);

		if (i >= *n)
		{
			*n = min;
			min *= counter;
			counter++;
		}
		mem[i] = c;
	}

	if (c == '\n')
		mem[i] = c;
	mem[i] = '\0';
	*s = mem;

	return ((ssize_t) i);
}
