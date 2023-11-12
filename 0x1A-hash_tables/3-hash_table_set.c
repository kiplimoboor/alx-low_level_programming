#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the hash table
 *
 * @ht: the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: (1) success, (0) otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
	hash_node_t *node;

	if (key == NULL)
		return (0);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	if (node == NULL)
	{
		ht->array[index] = item;
		return (1);
	}

	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
