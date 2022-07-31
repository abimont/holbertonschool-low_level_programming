#include "main.h"

/**
 *puts2 - prints every other line
 *@str: text string
 *Return: 0
 */

void puts2(char *str)
{
	int i, len;

	i = 0;
	len = 0;

	while (str[len] != '\0')
		len++;

	for (; i < len; i = i + 2)
		_putchar(str[i]);

	_putchar('\n');

}
