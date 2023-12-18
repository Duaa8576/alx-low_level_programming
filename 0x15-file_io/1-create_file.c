#include "main.h"

/**
 * _strlen - to return lengths
 * @s: string
 * Return: success
 */

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * create_file - to create file
 * @filename: name of file
 * @text_content: write text
 * Return: success
 */

int create_file(const char *filename, char *text_content)
{
	int F;
	ssize_t B = 0;
	ssize_t L = _strlen(text_content);

	if (!filename)
		return (-1);
	F = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (F == -1)
		return (-1);
	if (L)
		B = write(F, text_content, L);
	if (B == -1)
		return (-1);
	close(F);
	return (1);
}
