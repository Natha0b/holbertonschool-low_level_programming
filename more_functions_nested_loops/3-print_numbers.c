#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_numbers - print numbers
 *numbers - variable
 *_putchar: print caracters
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

