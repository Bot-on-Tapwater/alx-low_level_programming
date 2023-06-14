#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a new sorted hash table with the given size.
 * @size: The size of the sorted hash table.
 *
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Inserts or updates an element in the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key for the element.
 * @value: The value for the element.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (ht == NULL || key == NULL || value == NULL)
	return (0);

	if (node == NULL)
	return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		shash_node_t *current = ht->array[index];
		shash_node_t *prev = NULL;

		while (current != NULL && strcmp(key, current->key) > 0)
		{
			prev = current;
			current = current->next;
		}

		if (prev == NULL)
		{
			node->next = current;
			ht->array[index] = node;
		}
		else
		{
			prev->next = node;
			node->next = current;
		}
	}

	/* // Update sorted linked list */
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		shash_node_t *current = ht->shead;
		shash_node_t *prev = NULL;

		while (current != NULL && strcmp(key, current->key) > 0)
		{
			prev = current;
			current = current->snext;
		}

		if (prev == NULL)
		{
			node->snext = current;
			current->sprev = node;
			ht->shead = node;
		}
		else if (current == NULL)
		{
			prev->snext = node;
			node->sprev = prev;
			ht->stail = node;
		}
		else
		{
			prev->snext = node;
			node->sprev = prev;
			node->snext = current;
			current->sprev = node;
		}
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to search for.
 *
 * Return: A pointer to the value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	shash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (current != NULL && strcmp(key, current->key) != 0)
		current = current->next;

	return ((current != NULL) ? current->value : NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in ascending order by key.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	if (ht == NULL)
	return;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in descending order
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	if (ht == NULL)
	return;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			shash_node_t *temp = current;

			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
