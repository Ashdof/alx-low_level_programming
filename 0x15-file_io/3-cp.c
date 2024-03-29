#include "main.h"

#define BUFFER 1024

void closeFile(int);
int readFile(char *, char *);
int writeFile(char *, char *, int);

/**
 * main - copy file contents
 * @argc: argument cound
 * @argv: argument vectors
 *
 * description: this program copies the contents of one file into
 * another file
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int bytes;
	char *mem;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	mem = malloc(sizeof(char) * BUFFER + 1);
	if (mem == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	bytes = readFile(argv[1], mem);
	writeFile(argv[2], mem, bytes);

	free(mem);

	return (0);
}

/**
 * readFile - read the contents of a file
 * @filename: a pointer to the file to read from
 * @buffer: a pointer to a space in memory to store data read from
 * the opened file
 *
 * description: this function opens a file, and reads its contents
 * into the space in memory pointed to by buffer
 *
 * Return: number of bytes read
 */
int readFile(char *filename, char *buffer)
{
	int fd, bytes;

	fd = open(filename, O_RDONLY);
	bytes = read(fd, buffer, BUFFER);

	if (fd < 0 || bytes < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}
	closeFile(fd);

	return (bytes);
}

/**
 * writeFile - write data to a file
 * @filename: a pointer to the name of the file to write to
 * @buffer: a pointer to the space in memory containing the data
 * to write to the file
 * @size: number of bytes to write to the file
 *
 * description: this function opnes a file, accesses a data in
 * memory and writes the data to the opened file
 *
 * Return: number of bytes written to the file
 */
int writeFile(char *filename, char *buffer, int size)
{
	int fd, bytes;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	bytes = write(fd, buffer, size);

	if (fd < 0 || bytes < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	closeFile(fd);

	return (bytes);
}

/**
 * closeFile - close an opened file
 * @fd: a file descriptor of the opened file
 *
 * description: this function closes an opened file
 *
 * Return: nothing
 */
void closeFile(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
