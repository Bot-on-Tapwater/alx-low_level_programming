#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to pointer of head node
 * @idx: index of insertion
 * @n: value to be inserted
 *
 * Return: NULL or pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempHead, *tempPrevNode; /* stops loss of some nodes */
	unsigned int indexCount = 0; /* current index tracker */

	if (*head == NULL && idx == 0) /* empty list & inserting at index 0 */
	{
		newNode = malloc(sizeof(listint_t)); /* mem allocation */
		newNode->n = n; /* assign n value to newNode */
		newNode->next = NULL; /* newNode is the only node */
		*head = newNode; /* assign head to newNode */
	}
	tempHead = *head;
	while (tempHead != NULL)
	{
		if (idx == indexCount && tempHead->next != NULL) /* add node in middle */
		{
			newNode = malloc(sizeof(listint_t)); /* mem allocation */
			newNode->n = n; /* assign n value to newNode */
			newNode->next = tempHead; /* move current to next node */
			tempPrevNode->next = newNode; /* prev node points to newNode*/
			return (newNode);
		}
		else if (idx == (indexCount + 1) && tempHead->next == NULL) /* add end  */
		{
			newNode = malloc(sizeof(listint_t)); /* mem allocation */
			newNode->n = n; /* assign n value to newNode */
			newNode->next = NULL; /* newNode is last node */
			tempPrevNode->next = tempHead; /* prev node points to original last node */
			return (newNode);
		}
		indexCount++;
		tempPrevNode = tempHead; /* stops loss of current node in next iteration */
		tempHead = tempHead->next; /* move to next node*/
	}
	if (idx > indexCount + 1) /* index is out of bounds of list */
		return (NULL);
	return (NULL);
}
