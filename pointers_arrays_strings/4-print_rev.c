#include "main.h"
#include <stdio.h>
/**
 *print_rev - function a string
 *@s: varible punter
 *_putchar - print the character
 */
void print_rev(char *s)
{
	int r;
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (r = c - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
