#include "main.h"

/**
 *_puts - prints a string
 *@str: pointer to text string
 *Return: str
 */

void _puts(char *str)
{
	int txt;

	for (txt = 0;	; txt++)
	{
		if (str[txt] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[txt]);

	}
}
