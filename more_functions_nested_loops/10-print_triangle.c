#include "main.h"

/**
 *main - print triangle
 *@size - size is size
 */
void print_triangle(int size)
{
    int colum;
    int fil;
    int x = size;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (fil = 0; fil < size; fil++)
{
x--;
for (colum = 0; colum < size; colum++)
{
if (colum < x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}     
