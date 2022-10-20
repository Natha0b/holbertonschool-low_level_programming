#include <stdio.h>

char *leet(char *);

/**
 *main - check the code for Holberton School students.
 *
 *Return: Always 0.
 */
int main(void)
{
		char s[] = "Talk is cheap. Show me the code.\n";
			char *p;

				p = leet(s);
					printf("%s", p);
						printf("%s", s);
							return (0);
}
