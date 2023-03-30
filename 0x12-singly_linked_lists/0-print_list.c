#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints contents of a linked list
 * @h: pointer to linked list
 *
 * Return: returns number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
			nodes++;
		}
		else
		{
			printf("[%u] ", 0);
			printf("%s\n", "(nil)");
			nodes++;
		}
		h = (h->next);
	}
	return (nodes);
}
