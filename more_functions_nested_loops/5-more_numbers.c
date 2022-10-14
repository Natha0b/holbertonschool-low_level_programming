#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *more_numbers - print numbers
 */
void more_numbers(void)
{

int numbers;
int n;

for (numbers = 0 ; numbers <= 9 ; numbers++)
{
for (n = 0 ; n <= 14 ; n++)
{

if (n > 9)
{
_putchar((n / 10) + '0');
}


_putchar((n % 10) + '0');
}

_putchar('\n');
}
}
