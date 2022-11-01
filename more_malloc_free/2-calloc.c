#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **_calloc- function malloc and free
 *@nmemb: variable malloc
 *@size: variable malloc
 *Return: zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * nmemb);
	if (a == 0)
	{
		return (NULL);
	}

	return (a);

}
