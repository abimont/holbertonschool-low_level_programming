#include <stdio.h>
/**
 * main - print lowercase alphabet
 * Return: 0
 */

int main(void)

{
int alphabet = 96;

while (alphabet < 122)
{
((alphabet++));
putchar(alphabet);
}
putchar('\n');
return (0);
}
