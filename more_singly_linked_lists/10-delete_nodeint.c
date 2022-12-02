#include "lists.h"

/**
 *sum_listint- function
 *@head: variable
 *Return: Variable head
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *tmp = 0;

	if (node == NULL)
		return (-1);

	if ((tmp->n) = index)
	{
		node = node->next;
		free(tmp);
	}
	else
	{
		while ((tmp->next)->n != index)
			tmp->next = (tmp->next)->next;
	}

	return (1);
}
