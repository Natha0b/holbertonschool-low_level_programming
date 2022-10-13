#include "main.h"
/**
 *times_table - prints the 9 times table
 */

void times_table(void)
{
int filas;
int colum;
int c;

{
for(filas = 0; filas <= 9; filas++)
{
for(colum = 0; colum <= 9; colum++)
{
int ope;
ope = c * colum;
if (c > 9)
{
_putchar(',');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else if (colum == 0)
{
_putchar(c + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(c + '0');
}
}
c++;
_putchar('\n');
}
