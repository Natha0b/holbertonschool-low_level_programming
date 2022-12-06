#include "lists.h"


/**
 **insert_dnodeint_at_indext- function
 *@h: variable
 *@idx: variable
 *@n: variable
 *Return: variable
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux = *h;
	unsigned int counter = 0;

	if (!h || !*h)
		return (NULL);

	if (idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (counter < idx - 1)
	{
		aux = aux->prev;
		counter++;

		if (!aux)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->prev = aux->prev;
	aux->prev = new_node;

	return (new_node);
}
