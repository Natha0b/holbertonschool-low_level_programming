#include <stdio.h>

/**
 *print_name- print a variable
 *@name: variable
 *@f: variable name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f) (name);
	}
}
