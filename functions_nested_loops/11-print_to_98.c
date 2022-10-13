#include "main.h"
#include <stdio.h>

/**
 *@n: check number 
 *print_to_98 - print number 98
 */
void print_to_98(int n)

{
while (n != 98)
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


