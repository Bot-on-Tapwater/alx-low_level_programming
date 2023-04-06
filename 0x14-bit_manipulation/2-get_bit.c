#include "main.h"

/**
 * get_bit - gets bit at a given index
 * @n: decimal integer
 * @index: index
 *
 * Return: -1 | 1 | 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* index out of range */
	}

	return ((n & mask) ? 1 : 0);
}
