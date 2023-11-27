#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 or -1 if the function fails or filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed, writef, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lent] != '\0')
			lent++;
	}

	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);

	writef = write(filed, text_content, lent);
	if (writef == -1)
		return (-1);

	if (close(filed) == -1)
		return (-1);

	return (1);
}
