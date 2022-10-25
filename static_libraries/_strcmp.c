#include "main.h"
#include <stdio.h>
/**
 *_strcmp - function a string
 *@s1: varible punter
 *@s2: variable punter
 *Return: pointer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		
		s1++;
		s2++;
	}
	return (0);
}
