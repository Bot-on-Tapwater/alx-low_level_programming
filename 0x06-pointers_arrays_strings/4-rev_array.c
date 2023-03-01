#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: number of items in array a
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int count = n; /* number of ints in array */
	int i; /* used in for loop expressions */
	int rev; /* stores number at beginning indices before they are replaced */

	for (i = 0; i < count; i++)
	{
		count--;
		rev = a[i];
		a[i] = a[count];
		a[count] = rev;
	}
}


