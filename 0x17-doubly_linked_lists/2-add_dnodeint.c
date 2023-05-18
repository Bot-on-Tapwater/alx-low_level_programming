#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: pointer to head node address
 * @n: integer
 * Return: address to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	/* dlistint_t *temp_head = *head; */

	new = malloc(sizeof(dlistint_t)); /* mem allocation */

	if (new == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head; /* Next node is old head */
	new->prev = NULL; /* First node prev node is always NULL */

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new; /* Move head to new node */

	return (new);
}
