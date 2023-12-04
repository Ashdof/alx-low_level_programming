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
 * @lineptr: a reference pointer to a space in memory to read data
 * into
 * @n: a pointer to the maximum length of line
 * @stream: a pointer to the file to read from
 *
 * Return: number of bytes in a line read
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t i;
	int c = 0;

	for (i = 0; c != '\n' && i < *n - 1; i++)
	{
		c = getc(stream);

		if (c == EOF)
		{
			if (i == 0)
				return (-1);
			break;
		}
		*lineptr[i] = (char) c;
	}
	
	if (c == '\n')
		*lineptr[i++] = c;
	*lineptr[i] = '\0';

	return ((ssize_t) i);
}
