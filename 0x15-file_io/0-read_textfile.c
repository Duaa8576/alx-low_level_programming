#include "main.h"

/**
 * read_textfile - to read text
 * @filename: Name of file.
 * @letters: bytes to read.
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y;
	char buffer[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	y = read(x, &buffer[0], letters);
	y = write(STDOUT_FILENO, &buffer[0], y);
	close(x);
	return (y);
}
