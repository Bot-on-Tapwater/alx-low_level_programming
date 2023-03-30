#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: returns number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			/* printf("[%u] ", h->len); */
			/* printf("%s\n", h->str); */
			nodes++;
		}
		else
		{
			/* printf("[%u] ", 0); */
			/* printf("%s\n", "(nil)"); */
			nodes++;
		}
		h = (h->next);
	}
	return (nodes);
}
