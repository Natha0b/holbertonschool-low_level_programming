#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 ***alloc_grid- function malloc and free
 *@width: variable malloc
 *@height: variable malloc
 *Return: zero
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int n;
	int l;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a != NULL)
	{
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int *));

		if (a[i] == NULL)
		{
		for (; i > 0; i--)
		{
			free(a[i]);
		}
		free(a);
		return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (l = 0; l < width; l++)
		{
			a[n][l] = 0;
		}
	}
	return (a);
	}
	return (0);
}
