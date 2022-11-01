#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **string_nconcat- function malloc and free
 *@s1: variable malloc
 *@s2: variable malloc
 *@n: variable malloc
 *Return: zero
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c;
	unsigned int l;
	char *a;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
	{}
	for (l = 0; s2[l] != '\0'; l++)
	{}
	/*l--;*/
	a = malloc(((c + l + 1) * sizeof(char))- 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		a[i] = s1[i];

	if (n > l)
		n = l;

	for (j = 0; j < n; j++, i++)
		a[i] = s2[j];

	a[i] = '\0';

	return (a);
}
