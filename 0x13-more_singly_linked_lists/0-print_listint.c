#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: head of linked list
 *
 * Return: number of nodes in linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL) /* check if end of linked list */
	{
		printf("%d\n", h->n); /* print element */
		h = h->next; /* move to next node */
		node_count++;
	}
	return (node_count);
}
