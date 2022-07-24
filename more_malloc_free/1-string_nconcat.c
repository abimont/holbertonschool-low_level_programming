#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take from s2
 * Return: pointer to a newly allocated space in memory or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = n;
	for (i  = 0; s1[i]; i++)
		len++;

	str_concat = malloc(sizeof(char) * (len + 1));
	if (!str_concat)
		return (NULL);

	len = 0;
	i = 0;

	while (s1[i])
	{
		str_concat[len++] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] && i < n)
	{
		str_concat[len++] = s2[i];
		i++;
	}

	str_concat[len] = '\0';
	return (str_concat);
}
