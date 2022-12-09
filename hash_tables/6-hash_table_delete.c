#include "hash_tables.h"

/**
 * hash_table_delete- function.
 * @ht: const unsigned char variable.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *aux = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		aux = current;

		while (current != NULL)
		{
			current = current->next;
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = current;
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
	current = NULL;
	aux = NULL;

}
