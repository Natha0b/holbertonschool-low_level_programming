#include "main.h"
#include <stdio.h>
/**
 **string_toupper - function a string
 *@*c: variable pointer
 *Return: variable pointer
 */
char *string_toupper(char *c)
{
	int i;
	int M = 32;

	for (i = 0; c[i] != '\0';)
	{
		i++;

		if (c[i] >= 'a' && c[i] <= 'z')
		       c[i] -= M;
		i++;
	}

	return (c);
}
