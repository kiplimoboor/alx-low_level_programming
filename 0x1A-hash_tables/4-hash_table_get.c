#include "hash_tables.h"

/**
 * hash_table_get- retrieves a value from hash table associated with a key
 *
 * @ht: the hash table
 * @key: key being looked at
 *
 * Return: value associated with key, (NULL) otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (ht == NULL || key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
