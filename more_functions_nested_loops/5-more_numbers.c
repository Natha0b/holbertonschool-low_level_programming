#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_most_numbers - print numbers
 *numbers - variable
 */
int numbers;
int n = 0;


while (n <= 9)

{
for (numbers = 'a' ; numbers <= 'z' ; numbers++)

{
_putchar(numbers + '0');
}

_putchar('\n');
n++;
}
