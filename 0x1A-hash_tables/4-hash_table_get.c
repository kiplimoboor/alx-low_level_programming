#include "hash_tables.h"

/**
 * hash_table_get- gets value at a location in hash table
 *
 * @key: the key
 * @ht: the hash table
 *
 * Return: the value associated with the key, (NULL) otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
