#include "main.h"
/**
 *print_sign - numbers
 *@c: character check
 *Return: zero or one
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
_putchar('-');
return (-1);
}
}
