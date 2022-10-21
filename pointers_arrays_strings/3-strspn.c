#include "main.h"
#include <stdio.h>
/**
 *_strspn - function a string
 *@s: variable pointer
 *@accept: variable pointer
 *Return: variable pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	unsigned int a = 1;
	unsigned int c = 0;

	for (i = 0; a != 0 && s[i]; i++)
	{
		a = 0;
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
		{
			a++;
			c++;
		}
	}
	}
	return (c);
}
