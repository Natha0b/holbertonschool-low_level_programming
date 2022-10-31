#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- function argc argv
 *@argc: varible argc, argv
 *@argv: variable argc, argv
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

	return (a);	
}
