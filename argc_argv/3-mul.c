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
	int dig1 = 0;
	int dig2 = 0;

	if (argc == 3)
	{
		dig1 = atoi(argv[1]);
		dig2 = atoi(argv[2]);

		printf("%d\n", dig1 * dig2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}


