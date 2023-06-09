#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Creates a new HashTable */
	/* Declare and initialise hash table to NULL */
	hash_table_t *my_table = NULL;

	/* Allocate memory for hash table */
	my_table = malloc(sizeof(hash_table_t));

	/* Memory allocation check */
	if (my_table == NULL)
	{
		return (NULL);
	}

	/* Set size of the hash table */
	my_table->size = size;

	/* Allocate memory for the array of key value pairs */
	my_table->array = calloc(my_table->size, sizeof(hash_node_t));

	/* Memory allocation check */
	if (my_table->array == NULL)
	{
		return (NULL);
	}

	return (my_table);
}
