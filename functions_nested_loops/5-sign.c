#include "main.h"
/**
 * print_sign - check lowercase
 *@c: character check
 * 
 * Return: zero or one
 */

int print_sign(int n)

{

if (n > 0)
{
_putchar('+');
return (1);
}


else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
printf('-');
return (-1);
}
}
