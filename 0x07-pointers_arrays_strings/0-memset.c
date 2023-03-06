#include "main.h"

/**
 * _memset - fills memory area with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of byts to be filled
 *
 * Return: returns updated memory area pointed by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0; /* variable to check if n bytes of memory have been filled */

	while (count < n) /* loop terminates when n bytes of memory filled */
	{
		*(s + count) = b;	/* replace the value at memory */
					/* address with char b */
		count++;		/* increment count by 1 to go to the next */
					/* memory address */
	}

	return (s);
}
