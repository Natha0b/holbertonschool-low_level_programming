#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_most_numbers - print numbers
 *numbers - variable
 */
void print_most_numbers(void)
{

char numbers;

for (numbers = '0' ; numbers <= '9' ; numbers++)
{
if (numbers != '2' && numbers != '4')

{
_putchar(numbers + '0');
}
}
_putchar('\n');
}
