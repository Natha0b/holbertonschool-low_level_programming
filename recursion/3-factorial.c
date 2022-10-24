#include "main.h"
#include <stdio.h>
/**
 *factorial - function a recursion
 *@n: varible recursion
 *Return: variable recursion
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
