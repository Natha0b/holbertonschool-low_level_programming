#include "main.h"
#include <stdio.h>
/**
 *puts_half - function a string
 *@a: varible punter
 *@n: varible punter
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	if (c < n - 1)
		printf("%d, ", a[c]);
	else
		printf("%d\n", a[c]);
	}
	if (n <= 4)
		printf("\n");
}
