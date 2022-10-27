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
	int suma = 0;
	int n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	for (n = 1; n < argc; n++)
	{

		suma += atoi(argv[n]);
	}

	printf("%d\n", suma);	
	return (0);
}
