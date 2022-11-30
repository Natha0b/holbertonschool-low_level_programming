#include "lists.h"

/**
 *free_list- function
 *@head: variable
 */

void free_list(list_t *head)
{

	while (head == NULL)

	free_list(head->next);
	free(head->str);
	free(head);
}
