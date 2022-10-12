
#include "main.h"
/**
 *_islower - check lowercase
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
putchar(l + '0');
return (l);

}

else
{	
putchar(l + '0');
return (l);
}	
