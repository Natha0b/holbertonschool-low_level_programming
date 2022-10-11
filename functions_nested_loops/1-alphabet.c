
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void | printalphabet(void)
{

char alphabet;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)

{
putchar(alphabet);
}

putchar('\n');


}
