#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++, a++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((*a)[j]);
		}

		_putchar('\n');
	}
}
