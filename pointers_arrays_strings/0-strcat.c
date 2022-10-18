#include "main.h"
#include <stdio.h>
/**
 *puts_half - function a string
 *@str: varible punter
 */
char *_strcat(char *dest, char *src)
{
	char p[2];
	
	p[0] = dest;
	p[1] = '\0';
	printf("%s\n" p, dest);
}
