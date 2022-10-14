#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_line - print line
 */
void print_line(int n)
{

int line;

for (line = 1; line <= n; line++)
{
_putchar('_');
}
_putchar('\n');
}
