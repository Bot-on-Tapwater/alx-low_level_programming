#include "lists.h"

/**
 * dlistint_len - counts no. of nodes
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elem_count = 0; /* no. of elems */

	while (current != NULL) /* increment counter */
	{
		elem_count++;
		current = current->next;
	}

	return (elem_count);
}
