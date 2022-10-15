#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_line - print line
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
}
}
else
_putchar('\n');
}

