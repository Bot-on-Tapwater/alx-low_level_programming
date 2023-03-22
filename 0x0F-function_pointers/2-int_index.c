#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int's
 * @size: size of array
 * @cmp: pointer to func that compares int's
 *
 * Return: either -1 or index of first matched element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* loops through elements of array */

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL) /* NULL checks */
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			/* if cmp returns > 1 */
			/* return index of element */
			{
				return (i);
			}
		}
	}
	return (-1); /* No element matched */
}
