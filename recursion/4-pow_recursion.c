#include "main.h"
#include <stdio.h>
/**
 *factorial - function a recursion
 *@n: varible recursion
 *Return: variable recursion
 */
int _pow_recursion(int x, int y)
{
	int r;

	if (y < 0)
		return (- 1);
	r = _pow_recursion(x, y);
	return (r);
}

