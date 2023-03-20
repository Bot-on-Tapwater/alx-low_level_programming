#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees struct passed to it
 * @d: pointer to a struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free((*d).name);
	free((*d).owner);
	free(d);
}
