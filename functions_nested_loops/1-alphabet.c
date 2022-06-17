#include "main.h"
/**
 * main - print the alphabet using  _putchar
 * Return: 0
 */

int main(void)
{
	int print_alphabet = 97;

	while (print_alphabet < 123)
		{
		_putchar(print_alphabet);
		print_alphabet++;
		}
	_putchar('\n');
	return (0);
}
