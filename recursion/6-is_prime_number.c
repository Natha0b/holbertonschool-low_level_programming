#include "main.h"
#include <stdio.h>
/**
 *is_prime - function a recursion
 *@n: variable recursion
 *@s: variable recursion
 *Return: variable recursion
 */
int is_prime(int n, int s)
{
	if (s * s > n)
		return (1);
	if (n % s == 0 || n % (s + 2) == 0)
		return (0);
	return (is_prime(n, s + 6));

}
/**
 *is_prime_number - function a recursion
 *@n: variable recursion
 *Return: variable recursion
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime(n, 5));

}
