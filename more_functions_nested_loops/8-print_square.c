#include "main.h"

/**
 *print_square - prints a square
 *Return: 0
 *@size: variable
 */

void print_square(int size)
{

	int lines;
	int square;

	if (size > 0)
	{
		for (lines = 1; lines <= size; lines++)
		{
			for (square = 1; square <= size; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
