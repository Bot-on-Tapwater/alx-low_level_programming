#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arry of chars
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: either pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* array of with size no. of values */
	unsigned int i; /* variable for "for loop" */

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == 0)
	{
		/* if size is zero return NULL */
		/* if malloc fails return NULL */
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c; /* assign values to array */
	}

	/* return pointer to the array */
	return (array);
}
