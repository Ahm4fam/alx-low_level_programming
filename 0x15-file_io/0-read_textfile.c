#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the file name to read
 * @letters: the number of characters
 *
 * Return: the actual number of characters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, l, i;
	int r;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	read(f, buf, letters);
	buf[letters] = '\0';
	for (i = 0; buf[i] != '\0'; i += 1)
		l += 1;
	r = close(f);
	if (r != 0)
		exit(-1);
	r = write(STDOUT_FILENO, buf, l);
	if (r != l)
		return (0);
	free(buf);
	return (l);
}
