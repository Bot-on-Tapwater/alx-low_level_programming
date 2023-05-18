#include "lists.h"

/**
 * sum_dlistint - gets sum of elems
 * @head: doubly linked list
 * Return: sum of elems
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *current = head;
	size_t elem_sum = 0; /* no. of elems */

	while (current != NULL) /* increment counter */
	{
		elem_sum += current->n;
		current = current->next;
	}

	return (elem_sum);
}
