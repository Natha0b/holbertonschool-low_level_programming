#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *, char *);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Hello", "");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}