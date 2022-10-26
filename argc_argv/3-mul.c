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

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		dig1 = _atoi(argv[1]);
		dig2 = _atoi(argv[2]);

		printf("%d\n", dig1 * dig2);
	}
	return (0);
}


