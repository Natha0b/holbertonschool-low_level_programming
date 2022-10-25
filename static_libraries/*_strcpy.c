#include "main.h"
#include <stdio.h>
/**
 **_strcpy - function a string
 *@dest: varible punter
 *@src: varible punter
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';
	
	return (p);
}
