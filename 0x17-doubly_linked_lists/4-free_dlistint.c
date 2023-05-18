#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head->next != NULL)
	{
		next_node = head->next;
		/* free(head->next); */
		/* free(head->prev); */
		free(head);
		head = next_node;
	}
	free(head);
}
