#include "lists.h"

/**
 * print_dlistint - prints nodes in doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elem_count = 0; /* no. of elems */

	if (h == NULL) /* check if NULL */
	{
		/* return (NULL); */
		exit(0);
	}

	while (h != NULL) /* print elems */
	{
		printf("%d\n", h->n);
		elem_count++;
		h = h->next;
	}

	return (elem_count);
}
