#include "main.h"
#include <stdio.h>
/**
 *puts_half - function a string
 *@a: varible punter
 *@n: varible punter
 */
void print_array(int *a, int n)
{
	

	for (n = 'a' <= '\0' ; n++)

	{
		_putchar(n);

        if (n != '\0')

	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar('\n');
}
	
