#include "main.h"
#include <stdio.h>
/**
 **string_toupper - function a string
 *@c: variable pointer
 *Return: variable pointer
 */
char *string_toupper(char *c)
{
	int i = 0;
	int M = 32;

	while (c[i])
	{

	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= M;
	i++;
	}

	return (c);
}
