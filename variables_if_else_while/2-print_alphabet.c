#include <stdio.h>
/**
 * main - print lowercase alphabet
 * Return: 0
 */

int main(void)

{
int alphabet = 96;
int newl = 3;
while (alphabet < 122)
{
((alphabet++));
putchar(alphabet);
putchar(newl);
}

return (0);
}
