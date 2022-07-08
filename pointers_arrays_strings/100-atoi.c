#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int converted
 */

int _atoi(char *s)
{
	int i = 0;
	int j;
	int sign = -1;
	int out = 0;

	if (s[i] == '\0')
	return (0);

	while (s[i] != '\0')
	i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			sign = sign * -1;
		if ((s[j] >= '0') && (s[j] <= '9'))
			break;
	}

	for (j = 0; j < i; j++)
	{
		if ((s[j] >= '0') && (s[j] <= '9') && (s[j] != '\0'))
		{
			out = (out * 10) - (s[j] - '0');

			if ((s[j + 1] < '0') || (s[j + 1] > '9'))
				break;
		}
	}

	out = out * sign;

	return (out);
}
