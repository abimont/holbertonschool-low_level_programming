#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy to the new memory space
 * Return: pointer to the dulplicate string or NULL if no space or str=NULL
 */

char *_strdup(char *str)
{
	char *strcpy;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strcpy = malloc((sizeof(char) * len) + 1);

	if (!strcpy)
		return (NULL);

	while (str[i])
	{
		strcpy[i] = str[i];
		i++;
	}

	return (strcpy);
	free(strcpy);
}
