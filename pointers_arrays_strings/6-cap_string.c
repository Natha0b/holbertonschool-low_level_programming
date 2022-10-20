#include "main.h"
#include <stdio.h>
/**
 **cap_string - function a string
 *@c: variable pointer
 *Return: variable pointer
 */
char *cap_string(char *c)
{
	int i = 0;
	int M = 32;
	int len

	for(i=0; c[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((c[i]>='a' && c[i]<='z'))
				c[i]=c[i]-M;
	}
	if(c[i]==' ')
	{
		i++;
		if(c[i]>='a' && c[i]<='z')
			c[i]=c[i]-M;

	}

	return (c);
}
