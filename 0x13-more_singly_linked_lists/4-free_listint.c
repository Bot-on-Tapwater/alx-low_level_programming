#include "lists.h"

/**
 * free_listint - frees as listint_t list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *temp_head; /* pointer to next element */

	while (head != NULL)
	{
		temp_head = head->next; /* copy of head->next */
		free(head); /* free head, everything lost n, next */
		head = temp_head; /* assign next element to head */
	}
}
