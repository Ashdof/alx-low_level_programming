#include "main.h"

/**
 * read_textfile - read a file
 * @filename: a pointer to the name of the file
 * @letters: the number of letters to read and print
 *
 * description: this function reads from an opened file and prints
 * its contents according a specified value
 *
 * Return: number of letters read and printed, or 0 it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	size_t i;
	int fd;
	char *buffer;

	/* allocate space in memory for file contents */
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	/* read contents of file */
	bytes = read(fd, buffer, letters);
	if (bytes < 0)
	{
		free(buffer);
		return (0);
	}

	/* print contents of file */
	for (i = 0; i < letters; i++)
		_putchar(buffer[i]);

	close(fd);
	free(buffer);

	return (bytes);
}
