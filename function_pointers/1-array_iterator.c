#include <stdio.h>

/**
 *array_iterator- print a variable
 *@array: variable
 *@size: variable
 *@action: variable
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && action != NULL)
	{
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
	}

}
