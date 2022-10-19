#include "main.h"
#include <stdio.h>
/**
 *_strncat - function a string
 *@dest: varible punter
 *@src: varible punter
 *@n: variable punter
 *Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

	for ( ; i < n; i++)
	dest[i] = '\0';

	return dest;
}
