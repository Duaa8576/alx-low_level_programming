#include "main.h"

/**
 * get_endianness - endianness of system
 * Return: success
 */

int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}
