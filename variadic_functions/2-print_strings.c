#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- sum  of all its parameters
 * @separator: variable char
 * @n: variable
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pointer;
	va_list ptr;

	va_start(ptr, n);

	while (i < n)
	{
		pointer =  va_arg(ptr, char *);

		if (pointer == NULL)
			printf("(nil)");

		else
			printf("%s", pointer);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
				i++;
	}
	va_end(ptr);
	printf("\n");
}
