#include "main.h"
#include <stdio.h>
/**
 **_strcat - function a string
 *@dest: varible punter
 *@src: varible punter
 *Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest
	int c;
	int n;

	for (c = 0; dest[c]; c++)
	{

	}
	for (n = 0; src[n]; n++, c++)
	{
		dest[c] = src[n];
	}

	dest[c] = '\0';
	return (*p)

}
