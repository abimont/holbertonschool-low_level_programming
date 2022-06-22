#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int line;
	int num;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{

			if (num > 9 && num <= 14)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
