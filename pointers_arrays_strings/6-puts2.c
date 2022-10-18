#include "main.h"
#include <stdio.h>
/**
 *puts2 - function a string
 *@str: varible punter
 */
void puts2(char *str)
{
	int c = 0;
	int p;

	while (str[c] != '\0')
	{
		c++;
	}
	for (p = 0; p < c; p += 2)
	{
		_putchar(str[p]);
	}

	_putchar('\n');
}
