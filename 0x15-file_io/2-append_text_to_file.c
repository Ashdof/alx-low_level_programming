#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: the name of the file or path to the file to append
 * with new content
 * @text_content: the array of characters, blanks, newlines and tabs
 * to append to the file
 *
 * Description: this function opens a file, access its contents and
 * appends new string of characters to the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i;

	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY, 0600);
		if (fd == -1)
			return (-1);
		else
			return (1);
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	i = write(fd, text_content, strlen(text_content));
	if (i == -1)
		return (-1);

	close(fd);

	return (1);
}
