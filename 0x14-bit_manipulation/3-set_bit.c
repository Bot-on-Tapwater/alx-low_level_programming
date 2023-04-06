#include "main.h"

/**
 * set_bit - sets bit at given index
 * @n: decimal integer
 * @index: given index
 *
 * Return: -1 | 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* The specified index is out of range */
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
