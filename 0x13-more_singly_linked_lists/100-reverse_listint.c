#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer of head
 *
 * Return: NULL or pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode; /* pointer to previous node */
	listint_t *nextNode; /* pointer to next node in list */

	if (*head == NULL)
	{
		return (NULL);
	}


	/* currentNode = *head; */
	prevNode = NULL;

	while (*head) /* while head is not NULL condition is true */
	{
		nextNode = (*head)->next; /* holds value of what head points to  */
					/* (next node in list) before moving head position */
		(*head)->next = prevNode; /* head should point to our previous node */

		prevNode = *head; /* prevNode holds value of *head(our current node)*/
		*head = nextNode;	/* move our *head(our current node)  */
					/* to the next node in the list */
	}

	*head = prevNode;
	return (*head);
}
