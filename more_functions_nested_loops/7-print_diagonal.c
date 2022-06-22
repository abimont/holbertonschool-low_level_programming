#include "main.h"

/**
 *print_diagonal - draws a diagonal line
 *Return: 0
 *@n: variable
 */

void print_diagonal(int n)
{
	int bslash = 92;
	int space;
	int t;

	for (t = 1; t <= n; t++)
	{
		for (space = 0; space <= t; space++)
		{
			_putchar(' ');
		}
		_putchar(bslash);
		_putchar('\n');

	}
}
