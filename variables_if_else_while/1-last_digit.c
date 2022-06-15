#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print the last digit of n
 *Return: 0
 */

int main(void)
{
int n;
int t = 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % t) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % t);
}
else if ((n % t) < 6 && (n % t) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % t);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % t);
}
return (0);
}
