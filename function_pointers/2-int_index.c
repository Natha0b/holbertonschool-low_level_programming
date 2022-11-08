#include <stdio.h>

/**
 *int_index- function that searches for an integer
 *@array: variable
 *@size: variable
 *@cmp: variable
 *Return: value -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	return (-1);

	if (size <= 0)
	return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		return (j);
	}
	return (-1);

}
