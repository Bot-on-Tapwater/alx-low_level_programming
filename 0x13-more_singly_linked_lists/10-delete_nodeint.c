#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to pointer of head
 * @index: index of node to be deleted
 *
 * Return: -1 or 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempHead, *prevNode; /* stops loss of some nodes */
	unsigned int indexCount = 0; /* tracks current index */

	if (*head == NULL) /* empty list check */
		return (-1);

	tempHead = *head; /* prevents loss of head position */

	while (tempHead != NULL)
	{
		if (index == indexCount && index != 0) /* middle deletion */
		{
			prevNode->next = tempHead->next; /* prevNode points to current next node */
			free(tempHead); /* delete current node */
			return (1);
		}
		else if (index == indexCount && index == 0) /* index 0 deletion */
		{
			*head = tempHead->next; /* assign head to second element */
			free(tempHead); /* delete first node|head */
			return (1);
		}
		else if (index == indexCount && tempHead->next == NULL) /* last index */
		{
			free(tempHead); /* delete last node */
			prevNode->next = NULL; /* prevNode should terminate list */
			return (1);
		}
		prevNode = tempHead; /* store current node for next iteration */
		indexCount++;
		tempHead = tempHead->next; /* move to next node */
	}

	if (index > indexCount) /* list out of bounds check */
		return (-1);
	return (-1);
}
