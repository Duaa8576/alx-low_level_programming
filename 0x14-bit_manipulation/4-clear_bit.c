#include "main.h"

/**
 * clear_bit - to set zero value for the bit
 * @n: pointer
 * @index: index
 * Return: success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
