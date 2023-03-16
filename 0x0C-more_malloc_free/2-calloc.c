#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of elements
 * @size: size of bytes per element
 *
 * Return: a pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /* ptr to the allocated memory */
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size); /* allocating memory */

	if (ptr != NULL)
	{
		unsigned char *p = (unsigned char *)ptr;
		unsigned int i;

		for (i = 0; i < total_size; i++)
		{
			p[i] = 0;
		}
	}

	return (ptr);
}
