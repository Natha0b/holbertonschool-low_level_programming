#include "main.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 *numbers - variable
 *_putchar - print result
 */
void print_numbers(void)

{
char numbers;

for (numbers = '0' ; numbers <= '8' ; numbers++)

{
_putchar(numbers);
}


_putchar('\n');


}

