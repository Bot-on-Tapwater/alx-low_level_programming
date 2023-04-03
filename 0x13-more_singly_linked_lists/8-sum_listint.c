#include "lists.h"

/**
 * sum_listint - prints elements of a linked list
 * @head: head of linked list
 *
 * Return: number of nodes in linked list
*/
int sum_listint(listint_t *head)
{
	int listSum = 0; /* sum of all elements */
	listint_t *tempHead; /* prevents loss of head position */

	tempHead = head;

	while (tempHead != NULL) /* check if end of linked list */
	{
		listSum += tempHead->n; /* add to listSum */
		tempHead = tempHead->next; /* move to next node */
	}
	return (listSum);
}
