#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sr;
	ssize_t L, B;
	char *buf;

	if (!filename)
		return (0);

	sr = open(filename, O_RDONLY);

	if (sr == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	L = read(sr, buf, letters);
	B = write(STDOUT_FILENO, buf, L);

	close(sr);

	free(buf);

	return (B);
}
