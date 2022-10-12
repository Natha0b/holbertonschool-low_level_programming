
#include "main.h"
/**
 *print_last_digit - check lowercase
 *@n: character check
 *
 *Return: zero or one
 */

int print_last_digit(int n)
{
int l;
l = n % 10;

if (n < 0)

{
l = l * -1;
_putchar(l + '0');
return (l);

}

else
{
_putchar(l + '0');
return (l);
}
}
