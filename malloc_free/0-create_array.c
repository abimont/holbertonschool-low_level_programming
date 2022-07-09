#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *c1;
	int i, j;

	if (size == 0)
		return (NULL);

	c1 = malloc(sizeof(char) * size);

	if (!c1)
		return (NULL);
	j = size;

	for (i = 0; i < j; i++)
		c1[i] = c;

	return (c1);
}
