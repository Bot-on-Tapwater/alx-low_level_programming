#include "main.h"
/**
 * swap_int - swaps the values of integers a and b
 * @a: address holding value of variable a
 * @b: address holding value of variable b
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int mem_add_a;
	int mem_add_b;

	mem_add_a = *a;
	mem_add_b = *b;

	/* printf("A = %d\n", mem_add_a); */
	/* printf("B = %d\n", mem_add_b); */

	*a = mem_add_b;
	*b = mem_add_a;
}
