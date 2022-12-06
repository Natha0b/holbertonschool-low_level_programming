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

/**
 **add_dnodeint- function
 *@head: variable
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
		aux = aux->next;
		counter++;

		if (!aux)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = aux->next;
	aux->next = new_node;

	return (new_node);
}
