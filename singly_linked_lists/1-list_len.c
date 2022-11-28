#include <stdio.h>
#include "lists.h"

/**
 *list_len- function
 *@h: variable
 *Return: variable counter
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
