#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked- function malloc and free
 *@b: variable malloc
 *Return: zero
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);

}