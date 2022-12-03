#include "main.h"

/**
 *flip_bits- function
 *@n: variable
 *@m: variable
 *Return: variable
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_bit = 0, num = n ^ m;

	if (n == m)
		return (0);

	while (num > 0)
	{
		flip_bit += num & 1;
		num >>= 1;
	}
	return (flip_bit);
}
