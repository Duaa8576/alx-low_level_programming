#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer
 * Return: Success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bi <<= 1;
		bi += *b - '0';
		b++;
	}

	return (bi);
}

