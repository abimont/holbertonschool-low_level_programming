#include <stdio.h>

/**
 * main - print hexadecimal numbers
 * Return: 0
 */

int main(void)

{
	int num = 47;
	int let = 96;

	while (num < 57)
	{
		((num++));
		putchar(num);
	}
	while (let < 102)
	{
		((let++));
		putchar(let);
	}
	putchar('\n');
	return (0);
}
