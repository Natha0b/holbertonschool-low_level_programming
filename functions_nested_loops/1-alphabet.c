
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Alphabet
 *
 * Return: zero
 */

int main(void)
{

char print_alphabet;

for (print_alphabet = 'a' ; print_alphabet <= 'z' ; print_alphabet++)

{
putchar(print_alphabet);
}

putchar('\n');

return (0);

}
