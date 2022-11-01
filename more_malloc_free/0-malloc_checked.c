#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **create_array- function malloc and free
 *@b: variable malloc
 *Return: zero
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc((b) * sizeof(int *));

	if (a == NULL)
		exit(98);

	return (a);

}