#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
int alp = 122;

while (alp > 96)
{
	putchar(alp);
	((alp--));
}
putchar('\n');
return (0);
}
