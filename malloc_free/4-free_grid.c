#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *free_grid- function malloc and free
 *@grid: variable malloc
 *@height: variable malloc
 *Return: zero
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
