#include "lists.h"

/**
 **add_nodeint- function
 *@head: variable
 *@n: variable
 *Return: variable new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

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

/**
 **insert_nodeint_at_index- function
 *@head: variable
 *@idx: variable
 *@n: variable
 *Return: Variable head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux = *head;
	unsigned int counter = 0;

	if (idx == 0)
		return (add_nodeint(head, n));

	new_node = malloc(sizeof(listint_t));

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
