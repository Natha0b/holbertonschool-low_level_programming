#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - function a recursion
 *@s: varible recursion
 */
void _print_rev_recursion(char *s)
{
	int i;
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
