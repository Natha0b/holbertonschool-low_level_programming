#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - function a recursion
 *@x: varible recursion
 *@y: variable recursion
 *Return: variable recursion
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));

}
