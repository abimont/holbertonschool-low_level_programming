#include <stdio.h>
/**
 * main - print numbers with putchar
 * Return: 0
 */

int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
((n++));
}
putchar('\n');
return (0);
}
