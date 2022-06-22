#include "main.h"

/**
 * print_line - draws a straight line
 * Return: 0
 * @n: variable
 */

void print_line(int n)
{
	int us = 95;
	int t;

	for (t = 1; t <= n; t++)
	{
		_putchar(us);
	}
	_putchar('\n');
}
