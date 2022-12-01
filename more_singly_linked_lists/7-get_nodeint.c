#include "lists.h"

/**
 **get_nodeint_at_index- function
 *@head: variable
 *@index: variable
 *Return: Variable head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (i != index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}

	return (node);
}
