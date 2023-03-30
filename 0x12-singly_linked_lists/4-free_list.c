#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees the linked list
 * @head: pointer to linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
