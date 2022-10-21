#include "main.h"
#include <stdio.h>
/**
 **_memset - function a string
 *@s: variable pointer
 *@b: variable pointer
 *@n: variable pointer
 *Return: variable pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
