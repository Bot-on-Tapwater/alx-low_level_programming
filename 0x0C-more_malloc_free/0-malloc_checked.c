#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to be allocated
 *
 * Return: returns nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b); /* pointer to allocated memory */

	/* ptr = malloc(b);  allocating memory */

	if (ptr == NULL)
	{
		/* if malloc fails terminate process */
		exit(98);
	}

	else
	{
		return (ptr);
	}
}
