#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of node
 *
 * Return: NULL or element at index "index"
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempHead; /* prevents loss of head pointer */
	unsigned int currentIndex = 0;

	if (head == NULL) /* empty list check */
	{
		return (NULL);
	}

	tempHead = head;

	while (tempHead != NULL)
	{
		if (index == currentIndex)
		{
			/* printf("Arrived, n = %d\n", tempHead->n); */
			return (tempHead);
		}
		else
		{
			tempHead = tempHead->next; /* move to next element */
			currentIndex++;
		}
	}

	if (index > currentIndex) /* index not within list bounds */
	{
		return (NULL);
	}
	return (NULL);
}
