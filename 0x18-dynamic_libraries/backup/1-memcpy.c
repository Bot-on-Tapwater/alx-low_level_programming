#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: address we are copying to
 * @src: address we are copying from
 * @n: number of bytes to be copied
 *
 * Return: returns updated mem area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;	/* checks if n bytes have been copied */
	/* char temp_src[n]; */	/* temporarily holds values stored in src */
				/* to avoid mem overlap bugs */

	while (count < n)	/* loop terminates once n number bytes */
				/* have been copied */
	{
		/* printf("\n*dest[%d]: %p\nsrc[%d]: %p*\n", count, &dest[count] */
		/*		, count, &src[count]); */
		dest[count] = src[count];	/* copy values of *src to */
						/* to temp_src, index by index */
		count++;	/* increment count by 1 to move to the next */
				/* index */
	}

	count = 0; /* reset count to 0 to use it in next while loop */

	/* while (count < n) */
	/* { */
		/* dest[count] = temp_src[count]; */
		/* count++; */
	/* } */

	return (dest);
}
