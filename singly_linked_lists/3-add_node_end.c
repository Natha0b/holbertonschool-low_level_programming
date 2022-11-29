#include "lists.h"

/**
 **add_node_end- function
 *@head: variable
 *@str: variable
 *Return: variable counter
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last_node = (*head);
	int l;

	for (l = 0; str[l]; l++)
	{
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = l;
	node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = node;
	return (node);
}
