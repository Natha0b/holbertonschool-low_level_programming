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


	if (min > max)
	{
		return (NULL);
	}

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; min <= max; c++, min++)
	{
		a[c] = min;
	}

	return (a);
}
