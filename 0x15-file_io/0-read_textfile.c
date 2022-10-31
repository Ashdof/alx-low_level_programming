#include "main.h"

/**
 * read_textfile - read and print a file
 * @filename: the path to the file or name of the file to read
 * @letters: the character count to read and print to the POSIX
 * standard output
 *
 * Description: this function opens and reads the contents of a text
 * file with its named passe to it as an argument. It then prints
 * the contents of the file according to the size value passed to it
 * as an argument
 *
 * Return: the actual number of letters it could read and write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rfd, wfd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	rfd = read(fd, buf, letters);
	if (rfd == -1)
		return (0);

	wfd = write(STDOUT_FILENO, buf, rfd);
	if (wfd == -1 || rfd != wfd)
		return (0);

	free(buf);
	close(fd);

	return (wfd);
}
