#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take from s2
 * Return: pointer to a newly allocated space in memory or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat = NULL;
	unsigned int i = 0, j = 0;
	unsigned int len1 = _strlen(s1), len2 = _strlen(s2), n2 = n;

	if (n2 >= len2)
		n2 = len2;

	str_concat = malloc(sizeof(char) * (len1 + n2));
	if (!str_concat)
		return (NULL);

	while (i != len1 + n2)
	{
		if (i < len1)
			str_concat[i] = s1[i];
		else
		{
			str_concat[i] = s2[j];
			j++;
		}
		i++;
	}
	str_concat[len1 + n2] = '\0';
	return (str_concat);
}
