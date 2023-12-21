#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letter, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesread = read(fd, buffer, letters);

	if (bytesread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (byteswritten == -1 || byteswritten != bytesread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (byteswritten);
}
