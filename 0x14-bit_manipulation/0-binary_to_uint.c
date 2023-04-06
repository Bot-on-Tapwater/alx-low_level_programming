#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * binary_to_uint - converts to decimal
 * @b: binary string
 *
 * Return: 0 or decimal integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int one = 1;
	unsigned int zero = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	/* printf("Length = %u\n", len); */
	for (; *b != '\0'; b++)
	{
		if (*b == 48)
		{
			/* printf("Bit is:%c\n", *b); */
			sum += (power(2, (len - 1)) * zero);
		}
		else if (*b == 49)
		{
			/* printf("Bit is:%c\n", *b); */
			sum += (power(2, (len - 1)) * one);
			/* printf("Sum is: %u\n", sum); */
		}
		else
		{
			/* printf("Bit is:%c\n", *b); */
			return (0);
		}
		len--;
	}
	return (sum);
}

/**
 * power - raises a number to a power
 * @x: base number
 * @y: power
 *
 * Return: result
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int result = 1, i;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}
