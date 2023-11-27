#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename:  is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 *
 * Return: 1 or -1 if the function fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writef, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lent] != '\0')
			lent++;
	}

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	writef = write(fd, text_content, lent);
	if (writef == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
