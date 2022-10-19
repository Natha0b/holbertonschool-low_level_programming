#include "main.h"
#include <stdio.h>
/**
 *_strncat - function a string
 *@dest: varible punter
 *@src: varible punter
 *@n: variable punter
 *Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{

        int c;
	int i;


	for (c = 0; dest[c]; != '\0')

	{

	}
        for (n = 0; src[i]; != '\0')
	{
	if (i < n)
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	}

        _putchar('\n');
	return (p);
}
