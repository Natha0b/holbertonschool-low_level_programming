#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main- main.c function pointers
 *@argc: varibale number
 *@argv: variable char
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int number1, number2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func != NULL)
		printf("%i\n", op_func(number1, number2));

	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
