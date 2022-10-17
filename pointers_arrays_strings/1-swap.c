#include "main.h"
#include <stdio.h>

/**
 *swap_int - function a pointer
 *@a: variable punter
 *@b: variable punter
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
