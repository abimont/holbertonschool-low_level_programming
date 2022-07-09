#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string of NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s3 = malloc((sizeof(char) * (len1 + len2)) + 1);

	if (!s3)
		return (NULL);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	return (s3);

	free(s3);
}
