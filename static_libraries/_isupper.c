#include "main.h"
#include <stdio.h>

/**
 *_isupper - print the uppercase character
 *@c: check caracter
 *Return: zero and one
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	else
		return (0);
}
