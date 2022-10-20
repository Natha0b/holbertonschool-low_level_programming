#include "main.h"
#include <stdio.h>
/**
 **string_toupper - function a string
 *@c: variable pointer
 *Return: variable pointer
 */
char *leet(char *s)
{
	char letters[] = {'a','A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;
	
	while (s[i] != '\0')
	{ 
	        j = 0;
		while (letters[j] != '\0') 
		{
			if (s[i] = letters[j])
			{
				s[i] = replace[j];
		
			}
			j++;
		}
		i++;

	}
	return (s);
}


