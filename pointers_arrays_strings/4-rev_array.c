#include "main.h"
#include <stdio.h>
/**
 *reverse_array - function a string
 *@a: varible punter
 *@n: variable punter
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux = 0;

	n--;

	for (i = 0; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		n--;
	}
}
