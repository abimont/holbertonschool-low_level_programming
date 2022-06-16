#include <stdio.h>
/**
 * main - print combinations of single-digit numbers
 * Return: 0
 */

int main(void)

{
int num = 47;
int com = 44;
int spc = 32;

while (num < 57)
{
((num++));
putchar(num);
if (num < 57)
{
putchar(com);
}
if (num < 57)
{
putchar(spc);
}
}
putchar('\n');
return (0);
}
