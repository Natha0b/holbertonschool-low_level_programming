#include "main.h"
#include <stdio.h>
/**
 **_memset - function a string
 *@s: variable pointer
 *@b: variable pointer
 *@n: variable pointer
 *Return: variable pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
