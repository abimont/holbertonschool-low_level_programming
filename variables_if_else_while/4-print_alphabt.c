#include <stdio.h>
/**
 * main - print alphabet except e and q
 * Return: 0
 */

int main(void)

{
int alphabet = 96;
while (alphabet < 122)
{
if ((alphabet != 100) && (alphabet != 112))
{
((alphabet++));
putchar(alphabet);
}
else
{
((alphabet++));
}
}
putchar('\n');
return (0);
}
