#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of c or NULL if is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{

			s = s + j;
			return (s);
		}
	}

	return ('\0');
}
