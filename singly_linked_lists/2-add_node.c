#include "lists.h"

/**
 **add_node- function
 *@head: variable
 *@str: variable
 *Return: variable counter
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int l;

	for (l = 0; str[l]; l++)
	{
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = l;
	node->next = (*head);
	(*head) = node;

	return (node);
}
