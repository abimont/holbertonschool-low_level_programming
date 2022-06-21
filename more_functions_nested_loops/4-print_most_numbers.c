#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		if (numbers != 50 && numbers != 52)
		{
			_putchar(numbers);
		}
	}
	_putchar('\n');
}
