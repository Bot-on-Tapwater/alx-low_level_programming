#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key being searched for
 * Return: Value associated with Key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Get key_index using key_index() func */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	/* Go to the Node/linked_list associated with Key index */
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);

	/* Check if NULL */

	/* If NULL return NULL */

	/* If !NULL loop through our nodes using strcmp to check if key match */
}
