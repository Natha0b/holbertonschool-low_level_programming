#include "lists.h"

/**
 **add_dnodeint_end- function
 *@head: variable
 *@n: variable
 *Return: variable
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;


		new_node->prev = last_node;
		last_node->next = new_node;
	}

	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
		return (new_node);
}
