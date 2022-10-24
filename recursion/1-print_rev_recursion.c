#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - function a recursion
 *@s: varible recursion
 */
void _print_rev_recursion(char *s)
{
	int c = 0;

	if (s[c] != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(s[c]);

	}
}
