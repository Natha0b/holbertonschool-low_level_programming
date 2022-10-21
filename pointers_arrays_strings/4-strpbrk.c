#include "main.h"
#include <stdio.h>
/**
 **_strpbrk - function a string
 *@s: variable pointer
 *@accept: variable pointer
 *Return: variable pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])

				return (&s[i]);
		}
	}

	return ('\0');
}
