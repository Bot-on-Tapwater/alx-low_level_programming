#include "lists.h"

/**
 * print_dlistint - prints nodes in doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elem_count = 0; /* no. of elems */

	while (current != NULL) /* print elems */
	{
		printf("%d\n", current->n);
		elem_count++;
		current = current->next;
	}

	return (elem_count);
}
