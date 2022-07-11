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
	char *str_concat = NULL;
	unsigned int i = 0, j = 0, len1, len2, n2 = n;

	while (s1[i])
	{
		if (s1 == NULL)
			s1 = "";
		else
			i++;
	}
	len1 = i;
	while (s2[j])
	{
		if (s2 == NULL)
			s2 = "";
		else
			j++;
	}
	len2 = j;
	if (n >= len2)
		n2 = len2;
	str_concat = malloc(sizeof(char) * (len1 + n2));
	if (!str_concat)
		return (NULL);
	i = 0;
	j = 0;
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
