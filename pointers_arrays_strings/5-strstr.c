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
	int j;
	int c;

	for (j = 0; needle[j] != '\0')

		c = j;

	while (haystack[i + c - 1] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}

		if (j == c)
			return (haystack[i]);
		i++;
	}
	return ('\0');
}
