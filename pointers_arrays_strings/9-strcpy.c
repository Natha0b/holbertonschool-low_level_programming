#include "main.h"
#include <stdio.h>
/**
 *print_array - function a string
 *@a: varible punter
 *@n: varible punter
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
