#include "main.h"
#include <stdio.h>
/**
 *puts_half - function a string
 *@str: varible punter
 */
void puts_half(char *str)
{
	int r;
	int c = 0;
	int j;

	while (str[c] != '\0')
	{
		c++;
	}

	j = c - 1;

	for (r = 0; r < c / 2; r++)
	{
		j--;
		_putchar(str[r]);
	}
	_putchar('\n');
}
