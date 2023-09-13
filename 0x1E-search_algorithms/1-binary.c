#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 *                 Binary Search algorithm.
 *
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index where the `value` is located in the array, or -1 if the
 *         `value` is not present in the array or if the `array` is NULL.
 */
int binary_search(int *array, size_t size, int value)
{	
	int left = 0;
	int right = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
		}

		if (array[mid] == value)
		return (mid);
		else if (array[mid] < value)
		left = mid + 1;
		else
		right = mid - 1;
	}

	return (-1);
}
