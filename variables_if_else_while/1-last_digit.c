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

Last_digit_of= n % 10;

if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_of);
else if (n == 0)
printf("Last digit of %d is %d and is 0\n", n, last_digit_of);
else if (n < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digt_of);

return (0)

}
