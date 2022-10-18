#include "main.h"
#include <stdio.h>
/**
 *puts_half - function a string
 *@str: varible punter
 */
void puts_half(char *str)
{
	int c = 0;
	int n;
	int j;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	
	n = c / 2;

	else 
	n = ((c - 1) /2) + 1;


	for (j = n; j < c; c++)
	{

		_putchar(str[j]);
	}
	_putchar('\n');
}
