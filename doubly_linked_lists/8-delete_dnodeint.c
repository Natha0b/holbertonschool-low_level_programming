#include "lists.h"

/**
 *delete_dnodeint_at_index- function
 *@head: variable
 *@index: variable
 *Return: variable
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head, *aux;
	unsigned int counter = 0;

	if (node == NULL)
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
	else
	{

		while (counter < index - 1)
		{
			if (node == NULL)
				return (-1);

			(node->next)->prev = node->prev;
			(node->prev)->next = node->next;
			free(node);
			return (1);
		}

		aux = node->next;
		node->next = aux->next;
		free(aux);
	}
	return (1);
}
