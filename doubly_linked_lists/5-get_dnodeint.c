#include "lists.h"

/**
 **get_dnodeint_at_index- function
 *@head: variable
 *@index: variable
 *Return: variable
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (i != index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}

	return (node);

}
