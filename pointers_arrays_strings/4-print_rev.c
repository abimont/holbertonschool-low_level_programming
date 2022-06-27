#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: pointer to string
 *Return: 0
 */

void print_rev(char *s)
{

	int len = 0;
	int reverse;

	while (s[len] != '\0')
	{
		len++;
	}
	for (reverse = len - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
