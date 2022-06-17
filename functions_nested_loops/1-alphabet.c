#include "main.h"
/**
 * print_alphabet - print the alphabet using  _putchar
 * Return: 0
 */

void print_alphabet(void)
{
	int alp = 97;

	while (alp < 123)
		{
		_putchar(alp);
		alp++;
		}
	_putchar('\n');
}
