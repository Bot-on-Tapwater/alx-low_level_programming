#include "lists.h"

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
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp_head->next != NULL) /* move to last node */
	{
		temp_head = temp_head->next;
	}

	new->prev = temp_head;
	temp_head->next = new;

	return (new);
}