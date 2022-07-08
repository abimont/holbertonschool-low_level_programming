#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int converted
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = sign * -1;

		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + *s - 48;
			i = 1;
		}
		else if (i == 1)
			break;
		s++;
	}
	n = n * sign;
	return (n);
}
