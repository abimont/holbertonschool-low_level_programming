#include "main.h"

/**
 *rev_string - prints a string in reverse
 *@s: pointer to string
 *Return: 0
 */

void rev_string(char *s)
{
	char str;
	int i, j, rev;

	i = 0;
	rev = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	rev = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[rev];
		s[rev--] = str;
	}
}

