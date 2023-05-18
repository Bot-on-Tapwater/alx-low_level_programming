#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at an index
 * @head: pointer to head node
 * @index: index integer
 * Return: address to an element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_head = head;
	unsigned int count = 0;

	if (head == NULL) /* Check if list is empty */
	{
		return (NULL);
	}

	while (temp_head != NULL && count <= index)
	{
		if (count == index) /* arrived at element */
		{
			return (temp_head);
		}
		count++;
		temp_head = temp_head->next; /* move to next node */
	}

	return (NULL);
}
