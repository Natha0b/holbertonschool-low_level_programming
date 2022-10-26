#include <stdio.h>
#include "main.h"
/**
 *main- function argc argv
 *@argc: varible argc, argv
 *@argv: variable argc, argv
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int n = 0;

	for (n = 0; n < argv; n++)

		printf("%s\n", argv[n]);

	return (0);
}
