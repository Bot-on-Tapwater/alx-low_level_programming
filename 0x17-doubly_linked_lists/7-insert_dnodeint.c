#include "lists.h"

/**
 * insert_dnodeint_at_index - insterts node at given index
 * @h: pointer to doubly linked list
 * @idx: index
 * @n: integer
 * Return: pointer to new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = dlistint_len(*h);
	dlistint_t *temp_h = *h, *prev_temp = NULL, *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new_node == NULL || idx > (len)) /* malloc fail or out of range */
		return (NULL);
	else if (*h == NULL && idx != 0)
		return (NULL);

	while (temp_h != NULL && count <= idx)
	{
		if (count == idx) /* arrived at element */
		{
			break;
		}
		count++;
		prev_temp = temp_h;
		temp_h = temp_h->next; /* move to next node */
	}

	if (idx == 0) /* Front of list */
		add_dnodeint(h, n);
	else if (idx == (len)) /* Back of list */
		add_dnodeint_end(h, n);
	else /* Anywhere in middle */
	{
		new_node->n = n;
		new_node->prev = prev_temp;
		new_node->next = temp_h;
		temp_h->prev = new_node;
		prev_temp->next = new_node;
	}
	return (new_node);

}

/**
 * dlistint_len - counts no. of nodes
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elem_count = 0; /* no. of elems */

	while (current != NULL) /* increment counter */
	{
		elem_count++;
		current = current->next;
	}

	return (elem_count);
}
