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
	int s = 0;
	int n;

	for (n = 1; n < argc; n++)
	{

		s += atoi(argv[n]);
		printf("%d", atoi(argv[n]);
	}
	
	printf("%d\n", s);
	return (0);
}
