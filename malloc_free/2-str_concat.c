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

	if (s1 == NULL)
	{
		return (NULL);
	}

	for (c = 0; s1[c] != '\0'; c++)
	{

	}

	for (n = 0; s2[n] != '\0'; n++)

	a = malloc((c + n) * sizeof(char));

	for (i = 0; s1[i] != '\0'; i++)
	{

		a[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{

		a[j] = s2[n];

	}

	return (a);

}

