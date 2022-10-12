
#include "main.h"
/**
 *jack_bauer - every minute of the day 
 *@hora: character check
 *@minuto: character check
 */

void jack_bauer(void)
{
int hora;
int minuto;

for (hora = 0; hora <= 23; hora++)
{
for (minuto = 0; minuto <= 59; minuto++)
{
_putchar((hora / 10) + '0');
_putchar((hora % 10) + '0');
_putchar('\n');
_putchar(':');
_putchar((minuto / 10) + '0');
_putchar((minuto % 10) + '0');
_putchar('\n');
}
}
}



