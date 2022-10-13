#include "main.h"
#include <stdio.h>

/**
 *@n: check number 
 *print_to_98 - prints numbers
 */
void print_to_98(int n)

{
if (n != 98)
{
printf("%d, ", n);

if (n > 98)
{
n--;
}

if (n < 98) 
{

n++;
}

if (n == 98)
{
printf("%d\n", n);
}
}
}


