#include "hash_tables.h"

/**
 * *hash_table_get- function
 * @key: const char
 * @ht: hash_table_t
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	if (!key || !*key)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % (ht->size);

	node = ht->array[index];

	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
