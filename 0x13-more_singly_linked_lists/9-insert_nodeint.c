#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 *                            linked list.
 * @head: A pointer to a pointer to the head node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to store in the new node.
 *
 * Return: If memory allocation fails or the function fails to add the new node
 *         at the specified position, NULL is returned. Otherwise, the address
 *         of the new node is returned.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode;
	unsigned int nodeIndex = 0;

	if (head == NULL) /* check for invalid input */
		return (NULL);

	if (idx == 0) /* special case for inserting at head */
		return (add_nodeint(head, n));

	tempNode = *head;
	while (tempNode != NULL && nodeIndex < idx - 1) /* find node before target */
	{
		tempNode = tempNode->next;
		nodeIndex++;
	}

	if (tempNode == NULL || nodeIndex != idx - 1) /* check for invalid index */
		return (NULL);

	/* allocate memory for new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n; /* set value of new node */
	newNode->next = tempNode->next; /* link new node to next node */
	tempNode->next = newNode; /* link previous node to new node */

	return (newNode);
}

/**
 * add_nodeint - adds new node at beginning
 * @n: integer value for new node
 * @head: pointer to head of linked list
 *
 * Return: NULL or pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new element */

	if (new_node == NULL) /* mem allocation check */
	{
		return (NULL);
	}

	new_node->n = n; /* assign value n to new element */
	new_node->next = *head; /* assign next to previous "first" element */

	*head = new_node; /* assign head to new "first" element */
	return (new_node);
}


