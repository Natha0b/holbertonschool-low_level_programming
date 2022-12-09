#include "lists.h"

/**
 **insert_dnodeint_at_index- function double list
 *@h: variable
 *@idx: variable
 *@n: variable
 *Return: variable
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux = *h;
	unsigned int counter = 0;

	if (!h || (!*h && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (aux->next || counter == idx)
	{
		if (counter == idx)
		{
			aux->prev->next = new_node;
			new_node->prev = aux->prev;

			new_node->next = aux;
			aux->prev = new_node;

			return (new_node);
		}
		counter++;
		aux = aux->next;
	}
	if (counter < idx - 1)
	{
		new_node->next = NULL;

		aux->next = new_node;
		new_node->prev = aux;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
