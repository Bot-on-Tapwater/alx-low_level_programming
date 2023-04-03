#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 * @n: integer value for new node
 * @head: pointer to head of linked list
 *
 * Return: NULL or pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new element */

	if (new_node == NULL) /* mem allocation check */
	{
		return (NULL);
	}

	new_node->n = n; /* assign value n to new element */
	new_node->next = *head; /* assign next to previous "first" element */

	*head = new_node; /* assign head to new "first" element */
	return (new_node);
}
