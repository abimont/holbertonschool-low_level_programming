#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to tdarray or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **tdarray;
	int i = 0;

	if (width < 1 || height < 1)
		return (NULL);

	tdarray = malloc(sizeof(int) * height);

	if (!tdarray)
		return (NULL);

	while (i < height)
	{
		tdarray[i] = malloc(sizeof(int) * width);
		i++;

		if (!tdarray[i])
			return (NULL);
	}

	return ((int **)tdarray);

	free(tdarray);
}
