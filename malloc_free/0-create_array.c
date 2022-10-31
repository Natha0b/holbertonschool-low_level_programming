#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **create_array- function malloc and free
 *@size: varible malloc
 *@c: variable malloc
 *Return: zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;


	a = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		a[i] = c;

	}

	if (size == 0)
	{
		return ('\0');
	}
	if (*a == NULL)
	{
		return ('\0');
	}

	return (a);
}
