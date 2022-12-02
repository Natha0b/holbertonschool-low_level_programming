#include "lists.h"

/**
 *delete_nodeint_at_index- function
 *@head: variable
 *@index: variable
 *Return: one
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *aux;
	unsigned int counter = 0;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	else
	{

		while (counter < index - 1)
		{
			if (node == NULL)
				return (-1);

			node = node->next;
			counter++;
		}

		aux = node->next;
		node->next = aux->next;
		free(aux);
	}
	return (1);
}
