#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - function a recursion
 *@n: variable recursion
 *Return: variable recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (1);

	return (n * _sqrt_recursion(n - 1));

}
