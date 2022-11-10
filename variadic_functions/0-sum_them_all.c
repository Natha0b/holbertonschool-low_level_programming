#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all- sum  of all its parameters
 * @n: variable sum
 * Return: value sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);


	va_end(ptr);
	return (sum);
}
