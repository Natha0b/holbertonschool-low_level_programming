#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_diagonal - print diagonal line
 *@n: variable
 */
void print_diagonal(int n)
{
int l = 0;
int d = 0;

if (n > 0)
{
while (l < n)
{
while (d != l)
{
_putchar(' ');
d++;
}
_putchar('\\');
_putchar('\n');
l++;
d = 0;
}
}
else
_putchar('\n');
}

