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

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		head = &new_node;
	if (!(*head))
		*head = new_node;

	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
