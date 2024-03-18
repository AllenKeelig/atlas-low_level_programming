#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Description: This function adds or updates a key/value pair in the hash
 * If the key already exists, the associated value is updated.
 * If the key does not exist, a new node is created and added to the hash
 * If memory allocation fails, or if the input parameters are invalid
 * the function returns 0. Otherwise, it returns 1 upon successful insertion
 * 
 * Return: 1 upon successful insertion or update, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			if (new_node->value == NULL)
				return (0);
			return (1);
		}
		new_node = new_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
