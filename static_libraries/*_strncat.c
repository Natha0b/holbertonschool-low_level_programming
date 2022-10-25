#include "main.h"
#include <stdio.h>
/**
 *  *_strncat - function a string
 *   *@dest: varible punter
 *    *@src: varible punter
 *     *@n: variable punter
 *      *Return: pointer
 *       */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int i = 0;
	
	for (c = 0; dest[c] != '\0'; c++)
	{
		c++;
	}
	
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[c + i] = src[i];
		}
	}
	
	dest[c + i] = '\0';
	
	return (dest);
}
