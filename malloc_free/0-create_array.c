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

	for (i = 0; i < '\0'; i++)
	{

	for (c = 0; c < '\0'; c++)
	{
		 a[i] = c;
	}
	a = malloc(sizeof(*a) * size(char));

	if (size == 0)
	{
		return ('\0');
	}
	}
	return (c);	
}
