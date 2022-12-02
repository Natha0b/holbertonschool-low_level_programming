#include "main.h"

/**
 *binary_to_uint- function
 *@b: variable
 *Return: variable
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	if (b[i] == '\0')
		return (value);

	return (0);
}
