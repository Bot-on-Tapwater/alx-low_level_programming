#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - prints elements of a linked list
 * @h: head of linked list
 *
 * Return: number of nodes in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL) /* check if end of linked list */
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
