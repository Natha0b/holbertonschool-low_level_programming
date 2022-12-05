#include "lists.h"

/**
 **add_dnodeint- function
 *@head: variable
 *@n: variable
 *Return: variable
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (head)
		new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	else
	{
		new_node->next = NULL;
	}
	*head = new_node;

	return (new_node);
}
