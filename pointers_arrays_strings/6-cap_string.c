#include "main.h"
#include <stdio.h>
/**
 **cap_string - function a string
 *@s: variable pointer
 *Return: variable pointer
 */
char *cap_string(char *s)
{
	int i, j;
	char e1[] = " \t\n,;.!?\"(){}";

	i = 0;
	if (s[0] >= 97 && s[0] <= 122)
	s[0] -= 32;

	while (s[i] != '\0')
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
	{

	for (j = 0; e1[j] != '\0'; j++)
	{
		if (e1[j] == s[i])
	{																					        s[i + 1] -= 32;
		break;
																						}
	}
	}
	i++;
	}
	return (s);
}
