#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds new nodes to beginning of linked list
 * @head: pointer to pointer of the head
 * @str: string to be passed to the new node
 *
 * Return: NULL or address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (malloc(sizeof(list_t)));
	if (new == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		printf("Error: strdup failed\n");
		free(new);
		exit(99);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determnied
 *
 * Return: returns length of s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i])
		{
			i++;
		}
		else if (!s[i])
		{
			break;
		}
	}
	return (i);
}
