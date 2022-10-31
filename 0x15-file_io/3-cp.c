#include "main.h"
#include <stdio.h>

void check_error(int src, int dest, char *argv[]);

/**
 * main - copy contents of one file into another
 * @argc: the number of arguments supplied
 * @argv: the list of arguments
 *
 * Description: this program copies the contents of one file
 * into another file
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int src, dest, msg;
	ssize_t readbytes, j;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(src, dest, argv);

	readbytes = 1024;
	while (readbytes == 1024)
	{
		readbytes = read(src, buf, 1024);
		if (readbytes == -1)
			check_error(-1, 0, argv);
		j = write(dest, buf, readbytes);
		if (j == -1)
			check_error(0, -1, argv);
	}

	msg = close(src);

	if (msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	msg = close(dest);
	if (msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	return (0);
}

/**
 * check_error - check file access status
 * @src: the source file
 * @dest: the destination file
 * @argv: arguments
 *
 * Return: void
 */

void check_error(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
