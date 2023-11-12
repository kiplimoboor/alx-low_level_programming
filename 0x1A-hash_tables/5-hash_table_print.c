#include "hash_tables.h"

/**
 * hash_table_print-  prints a hash table
 *
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = malloc(sizeof(hash_node_t));
	int comma_flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma_flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
