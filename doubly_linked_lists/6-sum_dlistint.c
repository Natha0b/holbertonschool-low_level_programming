#include "lists.h"

/**
 *sum_dlistint- function
 *@head: variable
 *Return: variable
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
