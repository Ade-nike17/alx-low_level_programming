#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add value/key to
 * @key: key to be hashed
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded or 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			break;
		current = current->next;
	}
	if (current)
	{
		/* key already exists, then update the value */
		free(current->value);
		current->value = strdup(value);
		return (current->value ? 1 : 0);
	}
	/* key doesn't exist, then create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

