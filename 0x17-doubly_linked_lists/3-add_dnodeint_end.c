#include "lists.h"

/**
 *add_dnodeint_end - add node at end
 *@head: pointer to address of head node
 *@n: integer
 *Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp_head = *head;

	new = malloc(sizeof(dlistint_t)); /* mem allocation */

	if (new == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = temp_head;

	if (*head == NULL) /* check if list is empty */
	{
		*head = new; /* new node is head node */
		return (new);
	}

	while (temp_head->next != NULL) /* move to last node */
	{
		temp_head = temp_head->next;
	}
	new->prev = temp_head; /* new node points back to last node */
	temp_head->next = new; /* last node points forward to new node */

	return (new);
}
