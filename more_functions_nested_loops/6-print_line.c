#include "main.h"

/**
 * print_line - draws a straight line
 * Return: 0
 * @n: variable
 */

void print_line(int n)
{
	int us = 95;

	while (us)
	{
		if (us > n)
		{
			_putchar(us);
			us++;
		}
		else
		{
			_putchar('\n');
		}
	}
}
