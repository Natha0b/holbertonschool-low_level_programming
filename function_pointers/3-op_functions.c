#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - division module
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
