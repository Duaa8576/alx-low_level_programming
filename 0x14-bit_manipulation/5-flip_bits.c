#include "main.h"

/**
 * flip_bits - to calculate bits need to flipped
 * @n: number
 * @m: flip number
 * Return: Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}
	return (b);
}
