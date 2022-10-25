#include "main.h"
#include <stdio.h>
/**
 *_sqrt - function a recursion
 *@n: variable recursion
 *@s: variable recursion
 *Return: variable recursion
 */
int _sqrt(int n, int s)
{
	if ( s * s < n)
		return (_sqrt(n, s + 1));
	if (s * s > n)
	        return (-1);
	return (s);
}
/**
 *_sqrt_recursion - function a recursion
 *@n: variable recursion
 *Return: variable recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));	
}
