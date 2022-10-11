
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - Alphabet
 *   *
 *    * Return: zero
 *     */

int main(void)
{

	char alphabet;
	char uppercase;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)

	{
	putchar(alphabet);
	}

	for (uppercase = 'A' ; uppercase <= 'Z' ; uppercase++)

        {
	putchar(uppercase);
        }

	putchar('\n');

	return (0);
}	
