#include "lists.h"

/**
 *delete_dnodeint_at_index- function
 *@head: variable
 *@index: variable
 *Return: variable
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int counter = 0;

	if (!head)
		return (-1);
	if (!*head)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = node->next;
			(*head)->prev = NULL;
			free(node);
			return (1);
		}

		free(*head);
		*head = NULL;
		return (1);
	}

	while (node->next)
	{
		if (counter == index)
		{
			(node->next)->prev = node->prev;
			(node->prev)->next = node->next;
			free(node);
			return (1);
		}
		counter++;
		node = node->next;
	}

	if (index == counter)
	{
		(node->prev)->next = NULL;
		free(node);
		return (1);
	}

	return (-1);
}
