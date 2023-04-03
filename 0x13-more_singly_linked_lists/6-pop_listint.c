#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to a pointer of head
 *
 * Return: NULl or head node's data(n)
*/
int pop_listint(listint_t **head)
{
	listint_t *new_head; /* pointer to second element */
	int currentHead_n; /* value of n for current head */

	if (*head == NULL)
	{
		return (0);
	}

	new_head = (*head)->next; /* assign second element to new_head */
	currentHead_n = (*head)->n;

	free(*head); /* delete current head */

	*head = new_head; /* assign head to second element */

	return (currentHead_n);
}
