#include "lists.h"

/**
 **free_listint- function
 *@head: variable
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
