#include "main.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 *numbers - variable
 */
void print_numbers(void)

{
char numbers;

for (numbers = '0' ; numbers <= '8' ; numbers++)

{
_putchar(numbers + '0');
}


_putchar('\n');


}

