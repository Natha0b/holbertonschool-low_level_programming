#include <stdio.h>
#include "lists.h"

/**
 *print_list- function
 *@h: variable
 *Return: variable counter
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}
