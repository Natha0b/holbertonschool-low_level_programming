#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - function a recursion
 *@s: varible recursion
 *Return: variable recursion
 */
int factorial(int n)
{
	if (n <= 1)
		return (- 1);
	return n * factorial(n - 1);
}
