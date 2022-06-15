#include <stdio.h>
/**
 *main - print lowercase and uppercase alphabet
 *Return: 0
 */

int main(void)

{
int alphabet = 96;
int upper = 64;
while (alphabet < 122)
{
((alphabet++));
putchar(alphabet);
}
while (upper < 90)
{
((upper++));
putchar(upper);
}
putchar('\n');
return (0);
}
