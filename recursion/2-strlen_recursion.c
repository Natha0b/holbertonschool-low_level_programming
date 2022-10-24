#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - function a recursion
 *@s: varible recursion
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (s[c] == '\0')
        {
		_strlen_recursion(s + 1);
		
		_putchar(s[c]);

	}
	return (0);
}

