#include "main.h"

/**
 * append_text_to_file - append to file
 * @filename: a pointer to the name of the file
 * @text_content: a pointer to a space in memory containing the
 * contents to append to the file
 *
 * description: this function appends data to the end of a file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	bytes = write(fd, text_content, len);
	if (bytes < 0)
		return (-1);
	close(fd);

	return (1);
}
