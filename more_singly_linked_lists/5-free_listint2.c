#include "lists.h"

/**
 **free_listint2- function
 *@head: variable
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
