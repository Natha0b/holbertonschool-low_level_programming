#include "main.h"
#include <stdio.h>
/**
 **_strstr - function a string
 *@haystack: variable pointer
 *@needle: variable pointer
 *Return: variable pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int aux;
	int aux1;
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		aux = i;
		
		for (x = 0; needle[x] != '\0'; x++, aux++)
		{
			if (haystack[aux] != needle[x])
			{
				aux1 = 0;
				break;
			}
			
			else
			{
				aux1++;
			}
		}
		
		if (aux1 != 0)
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
