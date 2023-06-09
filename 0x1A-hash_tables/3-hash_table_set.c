#include "hash_tables.h"

/**
* addNode - Adds a new node to the beginning of a linked list.
* @head: Pointer to the head of the linked list.
* @key: Key for the new node.
* @value: Value for the new node.
* Return: int
*/
int addNode(hash_node_t **head, const char *key, const char *value)
{
/* // Create a new node */
hash_node_t *newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

newNode->key = strdup(key);
newNode->value = strdup(value);

if (newNode == NULL || newNode->key == NULL)
{
free(newNode->key);
free(newNode->value);
return (-1);
}

/* Make the new node point to the current head */
newNode->next = *head;

/* Update the head to point to the new node */
*head = newNode;

return (1);
}

/**
* create_item - Creates a new hash node with the given key and value.
* @key: Key for the new hash node.
* @value: Value for the new hash node.
*
* Return: Pointer to the newly created hash node, or NULL if an error occurs.
*/
hash_node_t *create_item(const char *key, const char *value)
{
/* Creates a linked list with our new element */
hash_node_t *new_element = malloc(sizeof(hash_node_t));

if (new_element == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (NULL);
}

/* Mem allocation for members of new_element */
new_element->key = strdup(key);
new_element->value = strdup(value);

return (new_element);
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
hash_node_t *new_element = create_item(key, value);
unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *current_element = ht->array[index];

if (new_element == NULL || ht == NULL)
{
return (0);
}

/* Check if index in array is NULL */
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
if (addNode(&ht->array[index], key, value) != -1)
return (1);
else
return (0);
}
}
