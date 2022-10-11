#include "main.h"
/**
 * print_alphabet_x10i - print
 */
void print_alphabet_x10(void)
{

char alphabet;
int number = 0;


while (number <= 9)

{
for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)

{
_putchar(alphabet);
}

_putchar('\n');
number++;

}
}
