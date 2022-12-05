#include "lists.h"

/**
 *free_dlistint- function
 *@head: variable
 *Return: variable
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);

}
