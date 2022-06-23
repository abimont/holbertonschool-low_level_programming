#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: variable that sets the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int width;
	int hs;
	int spc;

	if (size > 0)
	{
		for (width = 1; width <= size; width++)
		{
			for (spc = size - width; spc > 0; spc--)
			{
				_putchar(32);
			}

			for (hs = 0; hs < width; hs++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}

	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
