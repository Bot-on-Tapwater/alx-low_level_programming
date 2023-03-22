#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	/* Check if arrar|action are NULL */
	{
		unsigned long int i; /* variable for "for" loop */
		/* action is an address thus assign it to a variable */
		void (*funcPtr)(int) = action;

		for (i = 0; i < size; i++)
		{
			/* execute "action" on array elements*/
			funcPtr(array[i]);
		}
	}
}
