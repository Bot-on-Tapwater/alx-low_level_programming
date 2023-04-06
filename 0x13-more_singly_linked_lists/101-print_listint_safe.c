#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* move the current pointer */
		temp = current;
		current = current->next;

		/* check if the current node has been visited before */
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}
