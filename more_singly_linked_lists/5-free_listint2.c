#include "lists.h"

/**
 **free_listint2- function
 *@head: variable
 */

void free_listint2(listint_t **head)
{
	*head = NULL;

	free(*head);
}
