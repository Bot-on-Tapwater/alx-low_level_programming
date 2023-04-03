#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of linked list
 * @n: integer value for new node
 * @head: pointer to head of linked list
 *
 * Return: NULL or pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */
	listint_t *current_last; /* current last node */

	if (*head == NULL) /* empty list passed as argument */
	{
		new_node = malloc(sizeof(listint_t)); /* allocate memory for new element */

		if (new_node == NULL) /* mem allocation check */
		{
			return (NULL);
		}

		new_node->n = n; /* assign value n to new element */
		new_node->next = NULL; /* no next, new_node is first and last in list */

		*head = new_node; /* head points to new_node */
		return (new_node);
	}
	else
	{
		current_last = *head; /* to prevent losing position of head */
		while (current_last->next != NULL)
		{
			current_last = (current_last)->next; /* move to current last node */
		}
		new_node = malloc(sizeof(listint_t)); /* allocate memory for new element */

		if (new_node == NULL) /* mem allocation check */
		{
			return (NULL);
		}

		new_node->n = n; /* assign value n to new element */
		new_node->next = NULL; /* no next, new_node is last in list */

		current_last->next = new_node; /* current last node points to new_node */
		return (new_node);
	}
}
