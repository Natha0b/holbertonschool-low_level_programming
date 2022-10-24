#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - function a recursion
 *@s: varible recursion
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		_strlen_recursion(+ 1 (s + 1));

	}
	return (*s);
}
