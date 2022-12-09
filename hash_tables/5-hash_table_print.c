#include "hash_tables.h"

/**
 * hash_djb2 -  function implementing the djb2 algorithm.
 * @str: const unsigned char variable
 * Return: unsigned long integer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			printf(", ");
			printf("\'%s': \'%s\'", head->key, head->value);
			head = head->next;
		}
	}
	printf("}\n");
}