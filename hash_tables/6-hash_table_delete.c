#include "hash_tables.h"

/**
 * hash_table_delete- function.
 * @ht: const unsigned char variable.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *aux;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			aux = current;
			current = current->next;
			free(aux->key);
			free(aux->value);
			free(aux);

		}
	}
	free(ht->array);
	free(ht);

}
