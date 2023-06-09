#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: string "key"
 * @size: Size of the array of nodes
 * Return: The array index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);
	unsigned long int index = hash_code % size;

	return (index);
}
