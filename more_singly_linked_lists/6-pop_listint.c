#include "lists.h"

/**
 *pop_listint- function
 *@head: variable
 *Return: variable n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	new = (*head)->next;
	free(*head);
	*head = new;

	return (n);
}
