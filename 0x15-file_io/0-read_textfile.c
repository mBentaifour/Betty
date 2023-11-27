#include "main.h"
#include <stdlib.h>

/**
* read_textfile - that reads a text file and prints it to the POSIX
* @filename: name of the file to read
* @letters: number of letters to read and print
*
* Return: Actual number of letters read and printed
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, readf, writef, cf;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readf = read(fd, buffer, letters);
	if (readf == -1)
		return (0);

	writef = write(STDOUT_FILENO, buffer, readf);
	if (writef == -1 || writef != readf)
		return (0);

	cf = close(fd);
	if (cf == -1)
		return (0);

	free(buffer);

	return (writef);
}
