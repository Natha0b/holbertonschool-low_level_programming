#include "main.h"
#include <stdio.h>
/**
 **_strchr - function a string
 *@s: variable pointer
 *@c: variable pointer
 *Return: variable pointer
 */
char *_strchr(char *s, char c)
{
	int i; 

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}

	return (0);
}
