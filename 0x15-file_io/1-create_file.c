#include "main.h"

int strLen(char *);

/**
 * create_file - create a file
 * @filename: a pointer to the name of the file
 * @text_content: a pointer to a space in memory containing the data
 * to write to the file
 *
 * description: this function creates a file and updates it with
 * contents from the stdin
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd, bytes;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		len = strLen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	bytes = write(fd, text_content, len);
	if (bytes < 0)
		return (-1);
	close(fd);

	return (1);
}

/**
 * strLen - compute length of string
 * @s: a pointer to the string
 *
 * Return: length of string
 */
int strLen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (s - p);
}
