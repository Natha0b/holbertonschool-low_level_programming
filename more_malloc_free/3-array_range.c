#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **array_range- function malloc and free
 *@min: variable malloc
 *@max: variable malloc
 *Return: zero
 */
int *array_range(int min, int max)
{
	int *a;
	int c;


	for (c = 0; c <= max - min; c++)

	if (min > max)
	{
		return (NULL);
	}

	a = malloc((sizeof(*a) * c));


	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; c <= max - min; c++)
	{
		a[c] = c + min;
	}

	return (a);
}
