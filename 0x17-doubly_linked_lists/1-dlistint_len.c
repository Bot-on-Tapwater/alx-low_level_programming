#include "lists.h"

/**
 * dlistint_len - counts no. of nodes
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_count = 0; /* no. of elems */

	if (h == NULL) /* check if NULL */
	{
		/* return (NULL); */
		exit(0);
	}

	while (h != NULL) /* increment counter */
	{
		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
