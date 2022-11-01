#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked- function malloc and free
 *@b: variable malloc
 *Return: zero
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c;
	int l;
	char *a;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
	}
	a = malloc((c + n + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	if (n < l)
	{
		l = n;
	}
	for (i = 0; i < c; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		a[i] = s2[n];
		i++;
	}
	a[i] = '\0';
	return (a);
}
