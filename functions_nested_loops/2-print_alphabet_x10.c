#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet ten times
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int row = 0;
	char alp;

	while (row <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		row++;
		_putchar('\n');
	}
}
