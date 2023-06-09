#include "hash_tables.h"

/**
* addNode - Adds a new node to the beginning of a linked list.
* @head: Pointer to the head of the linked list.
* @key: Key for the new node.
* @value: Value for the new node.
* Return: int
*/
hash_node_t *addNode(hash_node_t **head, const char *key, const char *value)
{
	/* // Create a new node */
	hash_node_t *newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (newNode == NULL || newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode->value);
		free(newNode);
		return (NULL);
	}

	/* Make the new node point to the current head */
	newNode->next = *head;

	/* Update the head to point to the new node */
	*head = newNode;

	return (newNode);
}


/**
* hash_table_set - Inserts or updates an element in the hash table.
* @ht: Pointer to the hash table.
* @key: Key for the element.
* @value: Value for the element.
*
* Return: 1 on success, 0 on failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_element = ht->array[index];

	if (ht == NULL)
		return (0);
	new_element = addNode(&ht->array[index], key, value);

	if (new_element == NULL)
		return (0);
	if (current_element == NULL)
	{
		/* If index is NULL insert element (create linked list) */
		ht->array[index] = new_element;
		return (1);
	}
	else
	{
		/* If index is !NULL, search for the key in the linked list */
		while (current_element != NULL)
		{
			if (strcmp(current_element->key, key) == 0)
			{
				/* Found an existing key, update its value */
				free(current_element->value);
				current_element->value = strdup(value);
				free(new_element->key);
				free(new_element->value);
				free(new_element);
				return (1);
			}
			current_element = current_element->next;
		}
		/* If key was not found in the linked list, add a new node */
		if (addNode(&ht->array[index], key, value) != NULL)
			return (1);
		else
			return (0);
	}
}
