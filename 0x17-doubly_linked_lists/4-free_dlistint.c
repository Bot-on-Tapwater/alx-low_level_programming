#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;
	dlistint_t *current = head;

	while (current != NULL)
	{
		next_node = current->next;
		/* free(current->next); */
		/* free(current->prev); */
		free(current);
		current = next_node;
	}
}
