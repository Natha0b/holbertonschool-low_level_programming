#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: zero
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

Last_digitof = n % 10;

if (Last_digitof > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digitof);
else if (Last_digitof == 0)
printf("Last digit of %d is %d and is 0\n", n, last_digitof);
else if (Last_digitof < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digtof);

return (0)

}
