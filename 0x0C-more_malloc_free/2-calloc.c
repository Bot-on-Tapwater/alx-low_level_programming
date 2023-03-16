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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		/* return NULL if malloc fails */
		return (NULL);
	}

	return (ptr)

