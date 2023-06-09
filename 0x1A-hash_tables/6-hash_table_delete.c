#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table and frees resources
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	/* Looping through the indices of array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Looping through linked lists */
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
