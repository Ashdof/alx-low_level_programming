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
	int bytes, fd, len;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* allocate space in memory for file contents */
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* read contents of file */
	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}

	/* print contents of file */
	len = write(STDOUT_FILENO, buffer, bytes);
	if (len < 0)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytes);
}
