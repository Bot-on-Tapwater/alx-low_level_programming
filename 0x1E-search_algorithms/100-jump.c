#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump Search algorithm.
 *
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index where the `value` is located in the array
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	int i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);

	while (array[prev] < value)
	{
		int current = prev + step;

		if (current >= (int)size)
		current = size - 1;

		printf("Value checked array[%d] = [%d]\n", current, array[current]);

		if (array[current] >= value || current == (int)size - 1)
		{
		printf("Value found between indexes [%d] and [%d]\n", prev, current);
		break;
		}

		prev = current;
	}

	for (i = prev; i <= (int)size - 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		return (i);
	}

	return (-1);
}
