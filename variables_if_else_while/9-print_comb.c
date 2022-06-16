#include <stdio.h>
/**
 * main - print combinations of single-digit numbers
 * Return: 0
 */

int main(void)

{
int num = 47;

while (num < 57)
{
((num++));
putchar(num);
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
