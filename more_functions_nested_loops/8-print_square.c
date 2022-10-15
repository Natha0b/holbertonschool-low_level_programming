#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_square - print square
 *@n: variable
 */
void print_square(int size)
{
int p;
int s;

if (size > 0)
{
while (p < size)
{
while (s < size)
{
_putchar(' ');
s++;
}
_putchar('\n');
p++;
s = 0;
}
}
else 
_putchar('\n');
}

