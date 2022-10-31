#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **str_concat- function malloc and free
 *@s1: variable malloc
 *@s2: variable malloc
 *Return: zero
 */
char *str_concat(char *s1, char *s2)
{
	int c;
	int n;
	int i;
	int j;
	char *a;


	for (c = 0; s1[c] != '\0'; c++)
	{

	}

	for (n = 0; s2[n] != '\0'; n++)
	{

	}

	a = malloc((c + n) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	if (c > 0)
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	}

	if (n > 0)
	{

	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	}

	return (a);

}

