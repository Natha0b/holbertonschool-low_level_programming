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
