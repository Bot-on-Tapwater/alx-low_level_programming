#include "lists.h"

/**
 * free_listint2 - frees as listint_t list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_head; /* pointer to next element */

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp_head = (*head)->next; /* copy of head->next */
			free(*head); /* free head, everything lost n, next */
			*head = temp_head; /* assign next element to head */
		}
	}
}

