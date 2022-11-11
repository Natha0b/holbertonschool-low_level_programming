#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all- sum  of all its parameters
 * @format: variable char
 *
 */
void print_all(const char *const format, ...)
{
	va_list ptr;
	unsigned int count;
	char *p;
	char c;
	int i;
	float f;

	count = 0;
	va_start(ptr, format);
	while (format != NULL && format[count] != '\0')
	{
		switch (format[count++])
		{
		case 'c':
			c = (char)va_arg(ptr, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(ptr, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float)va_arg(ptr, double);
			printf("%f", f);
			break;
		case 'p':
			p = va_arg(ptr, char *);
			if (p == NULL)
				printf("(nil)");
			printf("%s", p);
			break;
		default:
			continue;
		}
		if (format[count] != '\0')
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
